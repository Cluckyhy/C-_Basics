//#include <iostream>
//using namespace std;
//
////1����ǰ��++�ͺ���++�������أ�ʵ��time�����ǰ��++�ͺ���++���ܡ�
//class Time {
//private:
//	int m_Minute;      //����
//	int m_Sec;		   //��
//public:
//	Time(int minute, int sec);
//	//����ǰ��++����
//	Time& operator++();
//	//���غ���++����
//	Time& operator++(int);
//	//��ӡ��ʾ
//	void display();
//};
////���캯��
//Time::Time(int minute = 0, int sec = 0) {
//	m_Minute = minute;
//	m_Sec = sec;
//}
////ʵ��ǰ��++������
//Time& Time::operator++() {
//	if (++m_Sec >= 60) {
//		m_Sec -= 60;
//		m_Minute++;
//	}
//	return *this;
//}
////ʵ�ֺ���++������
//Time& Time::operator++(int) {
//	Time temp(*this);
//	if (m_Sec++ >= 60) {
//		m_Sec -= 60;
//		m_Minute++;
//	}
//	return temp;
//}
////��ӡ����
//void Time::display() {
//		cout << m_Minute << ":" << m_Sec << endl;
//}
//
//void test01() {
//	//ʵ����һ��ʱ�����
//	Time t1(35, 50),t2;
//	for (int i = 0; i < 11; i++) {
//		++t1;
//		t1.display();
//	}
//	t2 = t1++;
//	cout << "t2��ʱ��Ϊ��";
//	t2.display();
//	cout << "t++��ʱ��Ϊ��";
//	t1.display();
//}
//
//int main() {
//	//���ò��Ժ���
//	test01();
//
//	getchar();
//	return 0;
//}