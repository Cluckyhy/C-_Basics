//#include <iostream>
//using namespace std;
//#include <string>
//
////�������Ϊ���Ա
//
////�ֻ���
//class Phone {
//public:
//	//�ֻ�Ʒ������
//	string m_PName;
//	//�ֻ��๹�캯��
//	Phone(string pname) {
//		cout << "Phone �Ĺ��캯������" << endl;
//		m_PName = pname;
//	}
//	~Phone() {
//		cout << "Phone ��������������" << endl;
//	}
//};
//
////����
//class Person {
//public:
//
//	//����
//	string m_Name;
//	//�ֻ�
//	Phone m_Phone;
//	
//	//���๹�캯��
//	//Phone m_Phone = pName;  ��ʽת����
//	Person(string name, string pName) :m_Name(name), m_Phone(pName) {
//		cout << "Person �Ĺ��캯������" << endl;
//	}
//	//�������������
//	~Person() {
//		cout << "Person ��������������" << endl;
//	}
//};
//
////�������������Ϊ�����Ա�������ʱ���ȹ���������ٹ�����������������˳���빹���෴
//
//
//void test01() {
//	Person p("����", "ƻ��MAX");
//	
//	cout << p.m_Name << "���ţ� " << p.m_Phone.m_PName << endl;
//}
//
//int main() {
//
//	test01();
//	getchar();
//	return 0;
//}