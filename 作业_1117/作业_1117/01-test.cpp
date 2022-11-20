//#include <iostream>
//using namespace std;
//
////1、对前置++和后置++进行重载，实现time对象的前置++和后置++功能。
//class Time {
//private:
//	int m_Minute;      //分钟
//	int m_Sec;		   //秒
//public:
//	Time(int minute, int sec);
//	//重载前置++功能
//	Time& operator++();
//	//重载后置++功能
//	Time& operator++(int);
//	//打印显示
//	void display();
//};
////构造函数
//Time::Time(int minute = 0, int sec = 0) {
//	m_Minute = minute;
//	m_Sec = sec;
//}
////实现前置++的重载
//Time& Time::operator++() {
//	if (++m_Sec >= 60) {
//		m_Sec -= 60;
//		m_Minute++;
//	}
//	return *this;
//}
////实现后置++的重载
//Time& Time::operator++(int) {
//	Time temp(*this);
//	if (m_Sec++ >= 60) {
//		m_Sec -= 60;
//		m_Minute++;
//	}
//	return temp;
//}
////打印函数
//void Time::display() {
//		cout << m_Minute << ":" << m_Sec << endl;
//}
//
//void test01() {
//	//实例化一个时间对象
//	Time t1(35, 50),t2;
//	for (int i = 0; i < 11; i++) {
//		++t1;
//		t1.display();
//	}
//	t2 = t1++;
//	cout << "t2的时间为：";
//	t2.display();
//	cout << "t++的时间为：";
//	t1.display();
//}
//
//int main() {
//	//调用测试函数
//	test01();
//
//	getchar();
//	return 0;
//}