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
//	cout << "�ҵ�����Ϊ��" << m_Age << endl;
//}
//
//class Student : public Person {
//private:
//	int m_Sno;
//public:
//	//��������㲻��Ҫ��дdisplay�����Ͳ���Ҫ������
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