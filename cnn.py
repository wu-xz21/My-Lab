import torch
from torch.utils.data import Dataset, DataLoader
from torch import nn, optim
import torch.nn.functional as F
import torchvision as tv
import torchvision.transforms as transforms



# 定义对数据的预处理
transform = transforms.Compose([
    transforms.ToTensor(),  # 转为Tensor
    transforms.Normalize((0.5, 0.5, 0.5), (0.5, 0.5, 0.5)),  # 归一化,将每个图像的像素值归一化到-1到1之间
])

# 训练集
trainset = tv.datasets.CIFAR10(  # PyTorch提供的CIFAR-10数据集的类，用于加载CIFAR-10数据集。
    root='./data/CIFAR/',  # 设置数据集存储的根目录。
    train=True,  # 指定加载的是CIFAR-10的训练集。
    download=True,  # 如果数据集尚未下载，设置为True会自动下载CIFAR-10数据集。
    transform=transform)  # 设置数据集的预处理方式。

# 数据加载器
trainloader = DataLoader(
    trainset,  # 指定了要加载的训练集数据，即CIFAR-10数据集。
    batch_size=2,  # 每个小批量(batch)的大小是4，即每次会加载4张图片进行训练。
    shuffle=True,  # 在每个epoch训练开始前，会打乱训练集中数据的顺序，以增加训练效果。
    num_workers=1)  # 使用2个进程来加载数据，以提高数据的加载速度。

# 测试集
testset = tv.datasets.CIFAR10(
    './data/CIFAR/',
    train=False,     # 指定加载的是CIFAR-10的测试集
    download=True,
    transform=transform)

testloader = DataLoader(
    testset,
    batch_size=2,
    shuffle=False,
    num_workers=1)


class Net(nn.Module):
    def __init__(self):
        super(Net, self).__init__()
        self.conv1 = nn.Conv2d(3, 6, 5)     # 输入通道数3，输出通道数6，卷积核大小5*5
        self.conv2 = nn.Conv2d(6, 16, 5)    # 输入通道数6，输出通道数16，卷积核大小5*5
        self.fc1 = nn.Linear(16 * 5 * 5, 120)                   # 输入通道数16*5*5，输出通道数120
        self.fc2 = nn.Linear(120, 84)   # 输入通道数120，输出通道数84
        self.fc3 = nn.Linear(84, 10)    # 输入通道数84，输出通道数10,因为一共有10种物品

    def forward(self, x):
        x = F.max_pool2d(F.relu(self.conv1(x)), (2, 2))     # conv1卷积->ReLu激活函数->2x2池化
        x = F.max_pool2d(F.relu(self.conv2(x)), 2)          # conv2卷积->ReLu激活函数->2x2池化
        x = x.view(x.size()[0], -1)  # -1表示会自适应的调整剩余的维度
        x = F.relu(self.fc1(x))         # 全连接层1
        x = F.relu(self.fc2(x))         # 全连接层2
        x = self.fc3(x)                 # 全连接层3
        return x


net = Net()     # 初始化模型
criterion = nn.CrossEntropyLoss()       # 交叉熵损失函数
optimizer = optim.SGD(net.parameters(), lr=0.001, momentum=0.9)     # SGD优化器

torch.set_num_threads(8)    # 设置线程数

if __name__ == '__main__':      # 开多线程的时候好像必须要加上这一句，否则会运行时错误
    for epoch in range(2):  # 2次循环遍历数据集
        running_loss = 0.0
        for i, data in enumerate(trainloader, 0):  # 遍历训练数据集

            # 获取输入
            inputs, labels = data
            # 梯度置零
            optimizer.zero_grad()
            # 前向+反向+优化
            outputs = net.forward(inputs)
            loss = criterion(outputs, labels)
            loss.backward()

            # 更新参数
            optimizer.step()

            # 打印统计信息
            # loss 是一个scalar,需要使用loss.item()来获取数值，不能使用loss[0]
            running_loss += loss.item()
            if i % 2000 == 1999:  # 每2000个batch打印一下损失
                print('[%d, %5d] loss: %.3f' \
                      % (epoch + 1, i + 1, running_loss / 2000))
                running_loss = 0.0
    print('Finished Training')

    # 测试集上表现的准确率
    correct = 0
    total = 0

    with torch.no_grad():
        for data in testloader:
            images, labels = data
            outputs = net(images)
            _, predicted = torch.max(outputs.data, 1)
            total += labels.size(0)
            correct += (predicted == labels).sum().item()
    print('Accuracy of the network on the 10000 test images: %d %%' % (100 * correct / total))
