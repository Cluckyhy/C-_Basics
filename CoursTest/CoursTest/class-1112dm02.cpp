//#include <iostream>
//using namespace std;
//
//class Time {
//private:
//	int m_Minute;
//	int m_Sec;
//public:
//	Time(int m = 0, int s = 0) :m_Minute(m), m_Sec(s) {};
//	//前置自增运算符重载（先进行加法运算，在返回修改后的对象本身）
//	Time operator++();
//	//后置自增运算符重载（返回的是自加前的对象，然后对象自加）
//	Time operator++(int);
//	void display();
//};
//
////前置自增运算符重载
//Time Time::operator++() {
//	if (++m_Sec >= 60) {
//		m_Sec -= 60;
//		++m_Minute;
//	}
//	return *this;
//}
//
////后置自增运算符重载
//Time Time::operator++(int) {
//	//先将对象本身存放到一个临时对象中，在最后将临时对象返回
//	Time temp(*this);     //相当于  Time temp = *this;
//	if(m_Sec++>=60){
//		m_Sec -= 60;
//		++m_Minute;
//	}
//	return temp;
//}
//
////将时间进行打印输出
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
//	t2 = t1++;          //先返回的是自加前的对象，然后对象自加
//	cout << "t1++ :";
//	t1.display();
//	cout << "t2 :";
//	t2.display();
//
//	getchar();
//	return 0;
//}