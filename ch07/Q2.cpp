#include <iostream>
using namespace std;

// public class �� �ƹ����̳� ��� ����.
// private �ڱ� �Լ� ���ο����� ��� ����.

class TV {
//public:
private:
	int powerOn, channel, volume;

public:
	void TV_on() {
		powerOn = 1;
		volume = 0;
		cout << "TV ON" << endl;
	}
	void TV_off() {
		powerOn = 0;
		volume = 0;
		cout << "TV OFF" << endl;
	}
	void volume_up() {
		volume ++;
		cout << "volume : " << volume << endl;

	}
	void volume_down() {
		volume --;
		cout << "volume : " << volume << endl;
	}

	void setChannel(int a) {
		if (a < 0) {
			cout << "������ �߸� �ϼ̽��ϴ�." << endl;
		}
		else {
			channel = a;
			cout << "���� channel " << channel << endl;
		}
	}
};

int main() {

	TV tv1;

	//tv1.powerOn = 0;
	//tv1.channel = 11; //private�� �ܺ� ���� ��� �ȵ�.
	tv1.setChannel(-20);
	tv1.setChannel(11);
	//tv1.volume = 0;

	tv1.TV_on();
	tv1.volume_up();
	tv1.volume_up();
	tv1.volume_up();
	tv1.volume_up();
	tv1.volume_down();
	tv1.setChannel(22);
	tv1.TV_off();
}