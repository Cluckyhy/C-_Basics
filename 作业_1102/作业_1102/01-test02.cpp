//#include <iostream>
//using namespace std;
//#include <string>
//
////2、在类的成员函数后面加 const，常函数，只能引用不能改变成员变量的值，可以被const对象调用。
//
////定义人类
//class Person {
//private:
//	string m_Name;  //姓名
//	int m_Sno;      //学号
//	int m_Age;      //年龄
//
//public:
//	Person(string name, int sno, int age);
//	void display() const;
//};
//
////构造函数对成员变量赋初值
//Person::Person(string name, int sno, int age) {
//	m_Name = name;
//	m_Sno = sno;
//	m_Age = age;
//}
//void Person::display() const {
//
//	//由于此成员函数为const修饰的常函数，所以只能引用而不能改变成员变量的值
//	/*m_Name = "李四";
//	m_Sno = 5210002;
//	m_Age = 22;*/
//	cout << "学生姓名为：" << m_Name << endl;
//	cout << "学生学号为：" << m_Sno << endl;
//	cout << "学生年龄为：" << m_Age << endl;
//}
//
//void test01() {
//	//创建一个普通对象
//	Person p1("张三", 5210001, 18);
//	//可以通过普通对象调用const成员函数
//	p1.display();
//	//创建一个常对象
//	Person const p2("王妞",521222,19);
//	//也可以通过常对象来调用const成员函数
//	p2.display();
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