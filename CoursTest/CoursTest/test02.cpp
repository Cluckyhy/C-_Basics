//#include <iostream>
//using namespace std;
//
////���ؼ̳�
//class Teacher {
//private:
//	string m_Tname;
//	int m_Tage;
//	string m_Ttitle;
//public:
//	Teacher(string tname,int tage,string ttitle);
//	void displayT();
//};
//class Student {
//private:
//	string m_Sname;
//	int m_Sage;
//	int m_Sscore;
//public:
//	Student(string sname, int sage, int sscore);
//	void displayS();
//};
//class Graduate :public Teacher, public Student {
//public:
//	Graduate(string tname, int tage, string ttitle, string sname, int sage, int sscore);
//	void displayG();
//};
//
//
//
//Teacher::Teacher(string tname, int tage, string ttitle) {
//	m_Tname = tname;
//	m_Tage = tage;
//	m_Ttitle = ttitle;
//}
//void Teacher::displayT() {
//	cout << "��ʦ����Ϊ��" << m_Tname << "��ʦ����Ϊ��" << m_Tage << "��ʦְ�ƣ�" << m_Ttitle;
//}
//Student::Student(string sname, int sage, int sscore) {
//	m_Sname = sname;
//	m_Sage = sage;
//	m_Sscore = sscore;
//}
//void Student::displayS() {
//	cout << "ѧ������Ϊ��" << m_Sname << "ѧ������Ϊ��" << m_Sage << "ѧ������Ϊ��" << m_Sscore;
//}
//Graduate::Graduate(string tname,int tage,string ttitle,string sname,int sage,int sscore):Teacher(tname,tage,ttitle),Student(sname,sage,sscore){}
//void Graduate::displayG() {
//	displayT();
//	displayS();
//}
//
//void test01() {
//	Graduate g1("����ʦ",3,"��ѧ��ʦ","����",18,89);
//	g1.displayG();
//}
//
//
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}