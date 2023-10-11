#include <iostream>
#include <string>

using namespace std;

class Time {
private: // 멤버 변수
	int hour;
	int minute;
	int second;

public:
	// 생성자 함수 == 초기화
	Time() {
		this->hour = 0;
		this->minute = 0;
		this->second = 0;
	}
	Time(int hour_, int minute_, int second_) {
		this->hour = hour_;
		this->minute = minute_;
		this->second = second_;
	}


	void increaseSecond() {
		if (this->second == 59) {
			this->second = 0;
			this->minute += 1;
			if (this->minute == 60) {
				this->minute = 0;
				this->hour += 1;
			}
			if (this->hour == 24) {
				this->hour = 0;
				this->minute = 0;
				this->second = 0;
			}
		}
		else if (this->minute == 59 || this->hour == 24) {
			this->second = 0;
		}
		else {
			this->second += 1;
		}
		// this->second = (this->second + 1) % 24;
		cout << "Minute: " << this->second << endl;
	}

	void increaseMinute() {
		if (this->minute == 59) {
			this->minute = 0;
			this->hour += 1; // -> increaseHour(); 함수를 사용
			if (this->hour == 24) {
				this->hour = 0;
				this->minute = 0;
				this->second = 0;
			}

		}
		else if (this->second == 59) {
			this->minute += 1;
		}
		else {
			this->minute += 1;
		}
		cout << "Minute: " << this->minute << endl;
	}

	void increaseHour() {
		if (this->hour == 24) {
			this->hour = 0;
			this->minute = 0;
			this->second = 0;
		}
		else {
			this->hour += 1;
		}
		cout << "Hour: " << this->hour << endl;
	}


	void decreaseHour() {
		if (this->hour <= 0) {
			this->hour = 23;
		}
		else {
			this->hour -= 1;
		}
		cout << "Hour: " << this->hour << endl;
	}

	void decreaseMinute() {
		if (this->minute <= 0) {
			this->minute = 59;
		}
		else if (this->second == 59) {
			this->minute = 0;
		}
		else {
			this->minute -= 1;
		}
		cout << "Minute: " << this->minute << endl;
	}

	void decreaseSecond() {
		if (this->second <= 0) {
			this->second = 59;
		}
		else {
			this->second -= 1;
		}
		cout << "Second: " << this->second << endl;
	}

	void display() {
		if (this->hour >= 10) {
			cout << "time: " << this->hour ;
		}
		else {
			cout << "0" << this->hour;
		}
		cout << ":";
		if (this->minute >= 10) {
			cout << "" << this->minute;
		}
		else {
			cout << "0" << this->minute;
		}
		cout << ":";
		if (this->second >= 10) {
			cout << this->second << endl;
		}
		else {
			cout << "0" << this->second << endl;
		}
	}
	// cout << (hour < 10 ? "0" : "") << hour << ":"
	//         (minute < 10 ? "0" : "") << minute << ":"
	//         (second < 10 ? "0" : "") << second << ":";

	void set_time(int hour_, int minute_, int second_) {
		this->hour = hour_;
		this->minute = minute_;
		this->second = second_;
	}

};

int main() {
	int i;

	Time time1;

	time1.increaseHour();
	time1.display();

	for (i =0 ; i < 24; i++) {
		time1.increaseHour();
	}

	time1.display();
	for (i = 0; i < 25; i++) {
		time1.increaseMinute();
	}
	time1.display();

	time1.decreaseSecond();
	time1.display();

	time1.increaseSecond();
	time1.display();

	Time timeset(00,59,00);
	timeset.display();
	timeset.increaseMinute();
	timeset.display();

	Time timeset1(00, 00, 59);
	timeset1.display();
	timeset1.increaseSecond();
	timeset1.display();

	Time timeset2(23, 59, 59);
	timeset2.display();
	timeset2.increaseSecond();
	timeset2.display();

	timeset2.set_time(3,3,3);
	timeset2.display();

	return 0;
}



