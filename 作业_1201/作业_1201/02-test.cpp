//#include <iostream>
//using namespace std;
//
////�����Ķ���
//class Person {
//public:
//	//����
//	string m_Name;
//	//����
//	int m_Age;
//	//���
//	double m_Height;
//public:
//	Person(string name,int age,double height){
//		m_Name = name;
//		m_Age = age;
//		m_Height = height;
//	}
//	void display();
//};
//
//
////�̳������
//class Student :virtual public Person {
//public:
//	//ѧ��
//	int m_Sno;
//public:
//	Student(string name, int age, double height, int sno) :Person(name, age, height), m_Sno(sno) {}
//	void display();
//};
//
////�̳������
//class Teacher :virtual public Person {
//public:
//	//����
//	int m_Money;
//public:
//	Teacher(string name, int age, double height, int money) :Person(name, age, height), m_Money(money) {}
//	void display();
//};
//
////���ؼ̳�Student��Teacher��
//class Graduate :public Student, public Teacher {
//private:
//	//����
//	int m_Score;
//public:
//	//�������������У�����Ҫ��ֱ�ӻ�����г�ʼ�������һ�Ҫ���������г�ʼ��
//	Graduate(string name, int age, double height, int sno, int money, int score) :Person(name,age,height),Student(name, age, height, sno), Teacher(name, age, height, money), m_Score(score) {}
//	//����ʵ�ֵ�ͬ����������
//	void display();
//};
//
//void Graduate::display() {
//	cout << "����Ϊ��" << m_Name << endl;
//	cout << "����Ϊ��" << m_Age << endl;
//	cout << "���Ϊ��" << m_Height << endl;
//	cout << "ѧ��Ϊ��" << m_Sno << endl;
//	cout << "����Ϊ��" << m_Money << endl;
//	cout << "�ɼ�Ϊ��" << m_Score << endl;
//}
//
//
////�����������ǣ�
////ʹһ�����̳�ʱ��������ֱ�ӻ�����ͬʱ�̳�һ���࣬�����ʹ������࣬��ô���������ཫ��̳ж�������е����ݳ�Ա
////�����ͻ��˷����ǵĿռ�ȥ������ʺ͹���һ���ĳ�Ա��������ʹ�������Ļ����Ϳ��Ժܺõı����������������
////���ֱ�ӻ�������̳л���Ļ�����ô���������ཫֻ��̳�������е�һ�����ݳ�Ա�����������ݵ�����
////��Ҫע����ǣ������������������ֱ�ӻ��඼������̳�������࣬��Ȼ�Ļ������������໹������û��̳�ֱ�ӻ����е����������ݳ�Ա
////���ң����������Ĺ��캯���У�����Ҫ�����ֱ�ӻ���ĳ�ʼ������Ҫ���������г�ʼ��
//
//
//int main() {
//
//	Graduate g1("����",18,1.80,5210760,5000,89);
//	g1.display();
//	
//	getchar();
//	return 0;
//}