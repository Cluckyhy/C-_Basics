//#include <iostream>
//using namespace std;
//
//class Time {
//private:
//	int m_Minute;
//	int m_Sec;
//public:
//	Time(int m = 0, int s = 0) :m_Minute(m), m_Sec(s) {};
//	//ǰ��������������أ��Ƚ��мӷ����㣬�ڷ����޸ĺ�Ķ�����
//	Time operator++();
//	//����������������أ����ص����Լ�ǰ�Ķ���Ȼ������Լӣ�
//	Time operator++(int);
//	void display();
//};
//
////ǰ���������������
//Time Time::operator++() {
//	if (++m_Sec >= 60) {
//		m_Sec -= 60;
//		++m_Minute;
//	}
//	return *this;
//}
//
////�����������������
//Time Time::operator++(int) {
//	//�Ƚ��������ŵ�һ����ʱ�����У��������ʱ���󷵻�
//	Time temp(*this);     //�൱��  Time temp = *this;
//	if(m_Sec++>=60){
//		m_Sec -= 60;
//		++m_Minute;
//	}
//	return temp;
//}
//
////��ʱ����д�ӡ���
//void Time::display() {
//	cout << m_Minute << ":" << m_Sec << endl;
//}
//
//
//
//int main() {
//
//	Time t1(34, 0),t2;
//	cout << "t1 :";
//	t1.display();
//	++t1;
//	cout << "++t1 :";
//	t1.display();
//	t2 = t1++;          //�ȷ��ص����Լ�ǰ�Ķ���Ȼ������Լ�
//	cout << "t1++ :";
//	t1.display();
//	cout << "t2 :";
//	t2.display();
//
//	getchar();
//	return 0;
//}