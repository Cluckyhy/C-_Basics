//#include <iostream>
//using namespace std;
//
////���峣�����Ա
//
////����ʱ����
//class Time {
//private:
//	const int m_Hour;  //Сʱ
//	//int m_Minute;  //����
//public:
//	int m_Minute;  //����
//	//ʱ����Ĺ��캯��
//	//Time(int hour,int minute) {
//	//	//m_Hour = hour;  //�������ʽ�����ǿ��޸ĵ���ֵ
//	//}
//	Time(int hour);
//	
//	void display() const;
//	void test01();
//};
//
////һ����Ա������const���Σ�ֻ��ͨ�����캯���Ĳ�����ʼ����Գ����ݳ�Ա���г�ʼ��
//Time::Time(int hour):m_Hour(hour){
//	m_Minute = 22;
//}
//void Time::display() const{
//	cout << m_Hour << endl;
//	cout << m_Minute << endl;
//	//test01();  //���� const�������ܵ��÷�const����
//}
//void Time::test01(){
//	cout << "this is test01()	" << endl;
//}
//
//int main() {
//
//	Time const t1(2);
//	//cout << t1.m_Hour;
//	t1.display();
//	/*t1.m_Minute = 33;*/
//	cout << t1.m_Minute << endl;
//	
//
//	getchar();
//	return 0;
//}