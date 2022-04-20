#include<iostream>
using namespace std;
class Clock {
public:
	void settime(int newhour, int newmin, int newsec);
	void showtime();
private:
	int hour;
	int min;
	int sec;
};
void Clock::settime(int newhour=0, int newmin=0, int newsec=0) {
	hour = newhour;
	min = newmin;
	sec = newsec;
}
inline void Clock::showtime() {
	cout << hour << ":" << min << ":" << sec << endl;
}
int main() {
	Clock Myclock;
	cout << "First time set and output is: " << endl;
	Myclock.settime();
	Myclock.showtime();
	cout << "Second time set and output is: " << endl;
	Myclock.settime(3, 4, 5);
	Myclock.showtime();
	return 0;
}