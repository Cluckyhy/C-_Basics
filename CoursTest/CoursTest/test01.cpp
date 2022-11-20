//#include <iostream>
//using namespace std;
//
////父类
//class Person {
//private:
//	int m_Age;
//protected:
//	string m_Sex;
//public:
//	string m_Name;
//public:
//	Person(int age, string sex,string name);
//	void display();
//};
//Person::Person(int age,string sex,string name) {
//	m_Age = age;
//	m_Sex = sex;
//	m_Name = name;
//}
//void Person::display() {
//	cout << "姓名为：" << m_Name << endl;
//	cout << "年龄为：" << m_Age << endl;
//	cout << "性别为：" << m_Sex << endl;
//}
////子类
//class Student :public Person {
//public:
//	int m_Sno;
//	//Student(int age, string sex, string name, int sno);
//	/*Student() {
//		m_Sno = 22222;
//	}*/
//	Student(int age, string sex, string name, int sno) :Person(age, sex, name) {
//		m_Sno = sno;
//	}
//	void display() {
//		cout << "姓名：" << m_Name<<endl;
//		cout << "性别：" <<m_Sex<<endl;
//		cout << m_Sno << endl;
//	}
//};
////Student::Student(int sno) {
////	//Person::Person(int age, string sex, string name);
////	m_Sno = sno;
////}
//
////void test01() {
////	//Student s1(1111);
////	//s1.display();
////}
//
//
//
//int main() {
//
//	//test01();
//	Student s1(28,"男","张三",2222);
//	s1.display();
//
//	getchar();
//	return 0;
//}