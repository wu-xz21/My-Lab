#include<iostream>
using namespace std;
int main() {
	int year, month, day, hour, min, sec;
	cout << "Please enter 5 integers that represent year,month,day,hour,min sec in order:";
	cin >> year >> month >> day >> hour >> min >> sec;
	cout << "Now is:" << year << "year" << month << "month" << day << "day" << hour << "hour" << min << "min" << sec << "sec";
	return 0;
}