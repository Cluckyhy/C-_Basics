//#include <iostream>
//using namespace std;
//
////4、mutable 修饰变量可以改变。
//class Time {
//private:
//	int m_Hour;     //小时
//	int m_Minute;   //分钟
//	mutable int m_Sec;      //秒
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
//	m_Sec = 50;  //由于成员变量被mutable修饰，所以虽然该函数是常成员函数也可以对m_Sec成员变量进行修改
//	cout << "现在时间为：" << m_Hour << "时" << m_Minute << "分" << m_Sec << "秒" << endl;
//}
//
//void test01() {
//	//创建一个常对象
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