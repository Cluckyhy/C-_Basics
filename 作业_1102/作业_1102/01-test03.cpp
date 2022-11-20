//#include <iostream>
//using namespace std;
//
////3、const修饰对象 叫常对象，只能调用const成员函数，无法调用非const成员函数。
//
////定义人类
//class Person {
//private:
//	string m_Name;  //姓名
//	int m_Sno;      //学号
//	int m_Age;      //年龄
//public:
//	Person(string name, int sno, int age);
//	void display() const;
//	void noconst();
//};
//
//Person::Person(string name, int sno, int age) {
//	m_Name = name;
//	m_Sno = sno;
//	m_Age = age;
//}
//void Person::display() const{
//	cout << "学生姓名为：" << m_Name << endl;
//	cout << "学生学号为：" << m_Sno << endl;
//	cout << "学生年龄为：" << m_Age << endl;
//}
//void Person::noconst() {
//	cout << "我不是const成员函数，不能被const对象所调用！！" << endl;
//}
//
//void test01() {
//	//创建一个常对象
//	Person const p1("张三", 521001, 22);
//	p1.display();
//	//p1.noconst();  //报错，因为noconst函数不是const成员函数，p1是常对象，只能调用const成员函数
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