//#include <iostream>
//using namespace std;
//
////1�����峣����
////����
//class Person {
//private:
//	string m_Name;  //����
//	//����mutable  ����const��Ա����Ҳ�����޸������ֵ��
//	mutable int m_Age;		//����
//public:
//	//����Ĺ��캯��
//	Person(string name,int age) {
//		m_Name = name;
//		m_Age = age;
//		cout << "��������Ĺ��캯��" << endl;
//	}
//	~Person() {
//		cout << "�����������������" << endl;
//	}
//	//��ӡ��Ϣ
//	void display() const {
//		//m_Name = "����";
//		m_Age = 33;  //��Ϊm_Age��mutable�����Σ�������������޸ĳ�Ա������ֵ
//		cout << m_Name << "����" << m_Age << "����";
//	}
//};
//
//
//int main() {
//
//	//���峣����
//	Person const p1("����",20);
//	p1.display();  //һ��ʼ������Ϊconst����ֻ�ܵ���const��Ա������������display()�����const�ͺ���
//	/*Person p2("����",22);
//	p2.display();*/
//
//
//	getchar();
//	return 0;
//}