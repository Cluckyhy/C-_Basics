//#include <iostream>
//using namespace std;
//
////3��const���ζ��� �г�����ֻ�ܵ���const��Ա�������޷����÷�const��Ա������
//
////��������
//class Person {
//private:
//	string m_Name;  //����
//	int m_Sno;      //ѧ��
//	int m_Age;      //����
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
//	cout << "ѧ������Ϊ��" << m_Name << endl;
//	cout << "ѧ��ѧ��Ϊ��" << m_Sno << endl;
//	cout << "ѧ������Ϊ��" << m_Age << endl;
//}
//void Person::noconst() {
//	cout << "�Ҳ���const��Ա���������ܱ�const���������ã���" << endl;
//}
//
//void test01() {
//	//����һ��������
//	Person const p1("����", 521001, 22);
//	p1.display();
//	//p1.noconst();  //������Ϊnoconst��������const��Ա������p1�ǳ�����ֻ�ܵ���const��Ա����
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