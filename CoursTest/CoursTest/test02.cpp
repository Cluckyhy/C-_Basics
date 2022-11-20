//#include <iostream>
//using namespace std;
//
////多重继承
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
//	cout << "教师名字为：" << m_Tname << "教师年龄为：" << m_Tage << "教师职称：" << m_Ttitle;
//}
//Student::Student(string sname, int sage, int sscore) {
//	m_Sname = sname;
//	m_Sage = sage;
//	m_Sscore = sscore;
//}
//void Student::displayS() {
//	cout << "学生姓名为：" << m_Sname << "学生年龄为：" << m_Sage << "学生分数为：" << m_Sscore;
//}
//Graduate::Graduate(string tname,int tage,string ttitle,string sname,int sage,int sscore):Teacher(tname,tage,ttitle),Student(sname,sage,sscore){}
//void Graduate::displayG() {
//	displayT();
//	displayS();
//}
//
//void test01() {
//	Graduate g1("张老师",3,"数学老师","张三",18,89);
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