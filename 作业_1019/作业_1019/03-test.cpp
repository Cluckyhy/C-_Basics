#include <iostream>
using namespace std;

//���Time�࣬���԰���ʱ���룬��Ƴ�Ա����Ϊ�����Ժ���ʾ�����ԡ���main�������ԡ�

//����һ��Time��
class Time {
private:
	int m_Hour;    //ʱ
	int m_Minute;  //��
	int m_Second;  //��
public:
	//����ʱ��
	void setHour(int hour) {
		m_Hour = hour;
	}
	//���÷���
	void setMinute(int minute) {
		m_Minute = minute;
	}
	//��������
	void setSecond(int second) {
		m_Second = second;
	}
	//��ʾʱ��
	void showTime() {
		cout << "��ǰʱ��Ϊ" << m_Hour << "ʱ" << m_Minute << "��" << m_Second << "��" << endl;
	}
};

int main03() {

	//ʵ����һ��ʱ�����
	Time t1;
	t1.setHour(8);
	t1.setMinute(35);
	t1.setSecond(58);
	t1.showTime();

	getchar();
	return 0;
}