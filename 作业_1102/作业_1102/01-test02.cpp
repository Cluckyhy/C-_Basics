//#include <iostream>
//using namespace std;
//#include <string>
//
////2������ĳ�Ա��������� const����������ֻ�����ò��ܸı��Ա������ֵ�����Ա�const������á�
//
////��������
//class Person {
//private:
//	string m_Name;  //����
//	int m_Sno;      //ѧ��
//	int m_Age;      //����
//
//public:
//	Person(string name, int sno, int age);
//	void display() const;
//};
//
////���캯���Գ�Ա��������ֵ
//Person::Person(string name, int sno, int age) {
//	m_Name = name;
//	m_Sno = sno;
//	m_Age = age;
//}
//void Person::display() const {
//
//	//���ڴ˳�Ա����Ϊconst���εĳ�����������ֻ�����ö����ܸı��Ա������ֵ
//	/*m_Name = "����";
//	m_Sno = 5210002;
//	m_Age = 22;*/
//	cout << "ѧ������Ϊ��" << m_Name << endl;
//	cout << "ѧ��ѧ��Ϊ��" << m_Sno << endl;
//	cout << "ѧ������Ϊ��" << m_Age << endl;
//}
//
//void test01() {
//	//����һ����ͨ����
//	Person p1("����", 5210001, 18);
//	//����ͨ����ͨ�������const��Ա����
//	p1.display();
//	//����һ��������
//	Person const p2("���",521222,19);
//	//Ҳ����ͨ��������������const��Ա����
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