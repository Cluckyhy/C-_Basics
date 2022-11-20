//#include <iostream>
//using namespace std;
//
////定义常对象成员
//
////定义时间类
//class Time {
//private:
//	const int m_Hour;  //小时
//	//int m_Minute;  //分钟
//public:
//	int m_Minute;  //分钟
//	//时间类的构造函数
//	//Time(int hour,int minute) {
//	//	//m_Hour = hour;  //报错，表达式必须是可修改的左值
//	//}
//	Time(int hour);
//	
//	void display() const;
//	void test01();
//};
//
////一旦成员变量被const修饰，只能通过构造函数的参数初始化表对常数据成员进行初始化
//Time::Time(int hour):m_Hour(hour){
//	m_Minute = 22;
//}
//void Time::display() const{
//	cout << m_Hour << endl;
//	cout << m_Minute << endl;
//	//test01();  //报错 const函数不能调用非const函数
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