//#include <iostream>
//using namespace std;
//#include <string>
//
////�ó���˵�����ؼ̳еĶ����������ͬ�����ǣ�
////Student �� Teacher�� ������Graduate�࣬���Ƕ��б��� name �� display����
//
//class Student {
//protected:
//	string m_Name;
//public:
//	Student(string name) {
//		m_Name = name;
//	}
//	void display();
//	void showAge(int age);
//};
//
//void Student::display() {
//	cout << "�ҵ����ֽУ�" << m_Name << endl;
//}
//void Student::showAge(int age) {
//	cout << "Student���age��" << age << endl;
//}
//
//
//
//class Teacher {
//protected:
//	string m_Name;
//public:
//	Teacher(string name) {
//		m_Name = name;
//	}
//	void display();
//	void showAge(int age);
//};
//
//void Teacher::display() {
//	cout << "�ҵ����ֽУ�" << m_Name << endl;
//}
//void Teacher::showAge(int age) {
//	cout << "Teacher���age��" << age << endl;
//}
//
//
//
//class Graduate :public Student, public Teacher {
//private:
//	//������Ա����--ѧ��
//	int m_Sno;
//public:
//	Graduate(string name, int sno) :Student(name), Teacher(name) {
//		m_Sno = sno;
//	}
//	void display();
//	void showAge(int age);
//};
//
//void Graduate::showAge(int age) {
//	cout << "Graduate���age��" << age << endl;
//}
//
//
//void Graduate::display() {
//	//������������ԣ���m_Name����ȷ������Ϊ��������֪���˴��õ���Student���е�m_Name����Teacher���е�m_Name;
//	//m_Name = "����";	
//
//	//��ȷд��
//	Student::m_Name = "����";
//
//	//���ﲻ��ֱ�ӵ���display()����,��Ϊ����Graduate���ж�����display()����������ֱ���ǵ����Լ���display()����
//	//�Ӷ��������ݹ����������ֳ��������ԭ���ǳ���ջ���
//	//display();
//
//	//��ȷд��
//	Student::display();
//	Teacher::display();
//
//}
//
//void test() {
//	Graduate g1("����",18);
//	g1.display();
//	//��Graduate������showAge(int age)����ʱ�����ڶ�����.����ϻ���������Ȼ����������ԣ���֪�����ĸ������showAge(int age)����
//	g1.Student::showAge(20);
//	g1.Teacher::showAge(30);
//	//��Graduate������showAge(int age)����ʱ�����Ҳ������ͣ�����һ��ʱ����ͷ�����ͬ�������ĸ�������
//	//���ԣ�g1.showAge(22)�����õ���Graduate���showAge(int age)����
//	g1.showAge(22);
//}
//
//
//
//int main() {
//
//	test();
//
//	getchar();
//	return 0;
//}