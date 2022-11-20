//#include <iostream>
//using namespace std;
//
////1、用const修饰的数据成员，构造函只能以成员列表方式赋值，只能读取数据成员，不能改变数据成员；
//
////定义人类
//class Person {
//private:
//	string m_Name;  //姓名
//	const int m_Sno;      //学号
//	const int m_Age;      //年龄
//
//public:
//	Person(string name, int sno, int age);
//	void display();
//
//};
//
////构造函数中对const修饰的成员变量采用列表方式赋值，而非const成员变量可以正常赋值
//Person::Person(string name, int sno, int age):m_Sno(sno),m_Age(age) {
//	m_Name = name;
//}
//void Person::display() {
//	m_Name = "李四";     //姓名为非const成员，所以可以改变数据成员的值
//
//	//学号和年龄为const成员，所以不能改变数据成员的值，只能读取。
//	//m_Sno = 111020;
//	//m_Age = 22;
//	cout << "学生姓名为：" << m_Name << endl;
//	cout << "学生学号为：" << m_Sno << endl;
//	cout << "学生年龄为：" << m_Age << endl;
//}
//
//void test01() {
//	Person p1("张三",5210001,18);
//	p1.display();
//}
//
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}