//#include <iostream>
//using namespace std;
//
////1����const���ε����ݳ�Ա�����캯ֻ���Գ�Ա�б�ʽ��ֵ��ֻ�ܶ�ȡ���ݳ�Ա�����ܸı����ݳ�Ա��
//
////��������
//class Person {
//private:
//	string m_Name;  //����
//	const int m_Sno;      //ѧ��
//	const int m_Age;      //����
//
//public:
//	Person(string name, int sno, int age);
//	void display();
//
//};
//
////���캯���ж�const���εĳ�Ա���������б�ʽ��ֵ������const��Ա��������������ֵ
//Person::Person(string name, int sno, int age):m_Sno(sno),m_Age(age) {
//	m_Name = name;
//}
//void Person::display() {
//	m_Name = "����";     //����Ϊ��const��Ա�����Կ��Ըı����ݳ�Ա��ֵ
//
//	//ѧ�ź�����Ϊconst��Ա�����Բ��ܸı����ݳ�Ա��ֵ��ֻ�ܶ�ȡ��
//	//m_Sno = 111020;
//	//m_Age = 22;
//	cout << "ѧ������Ϊ��" << m_Name << endl;
//	cout << "ѧ��ѧ��Ϊ��" << m_Sno << endl;
//	cout << "ѧ������Ϊ��" << m_Age << endl;
//}
//
//void test01() {
//	Person p1("����",5210001,18);
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