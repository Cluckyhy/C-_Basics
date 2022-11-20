//#include <iostream>
//using namespace std;
//
//class Person {
//private:
//	int m_Age;
//public:
//	Person(int age);
//	void display();
//};
//Person::Person(int age) {
//	m_Age = age;
//}
//void Person::display() {
//	cout << "我的年龄为：" << m_Age << endl;
//}
//
//class Student : public Person {
//private:
//	int m_Sno;
//public:
//	//这里如果你不需要重写display函数就不需要再声名
//	//void display();
//	Student(int age, int sno);
//};
//Student::Student(int age, int sno):Person(age) {
//	m_Sno = sno;
//}
//
//void test01(){
//	Student s1(31,2220);
//	s1.display();
//}
//
//
//
//
//
//int main() {
//
//	test01();
//	getchar();
//	return 0;
//}