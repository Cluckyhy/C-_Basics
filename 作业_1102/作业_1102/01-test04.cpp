//#include <iostream>
//using namespace std;
//
////4��mutable ���α������Ըı䡣
//class Time {
//private:
//	int m_Hour;     //Сʱ
//	int m_Minute;   //����
//	mutable int m_Sec;      //��
//public:
//	Time(int hour, int minute, int sec);
//	void showTime() const;
//};
//
//Time::Time(int hour,int minute,int sec) {
//	m_Hour = hour;
//	m_Minute = minute;
//	m_Sec = sec;
//}
//void Time::showTime() const {
//	m_Sec = 50;  //���ڳ�Ա������mutable���Σ�������Ȼ�ú����ǳ���Ա����Ҳ���Զ�m_Sec��Ա���������޸�
//	cout << "����ʱ��Ϊ��" << m_Hour << "ʱ" << m_Minute << "��" << m_Sec << "��" << endl;
//}
//
//void test01() {
//	//����һ��������
//	Time const t1(15, 20, 35);
//	t1.showTime();
//}
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}