//#include <iostream>
//using namespace std;
//#include <string>
//
////用程序说明多重继承的二义性问题和同名覆盖，
////Student 和 Teacher类 派生出Graduate类，她们都有变量 name 和 display（）
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
//	cout << "我的名字叫：" << m_Name << endl;
//}
//void Student::showAge(int age) {
//	cout << "Student类的age：" << age << endl;
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
//	cout << "我的名字叫：" << m_Name << endl;
//}
//void Teacher::showAge(int age) {
//	cout << "Teacher类的age：" << age << endl;
//}
//
//
//
//class Graduate :public Student, public Teacher {
//private:
//	//新增成员变量--学号
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
//	cout << "Graduate类的age：" << age << endl;
//}
//
//
//void Graduate::display() {
//	//这里产生二义性，报m_Name不明确错误，因为编译器不知道此处用的是Student类中的m_Name还是Teacher类中的m_Name;
//	//m_Name = "李四";	
//
//	//正确写法
//	Student::m_Name = "李四";
//
//	//这里不能直接调用display()函数,因为本身Graduate类中定义了display()函数，这里直接是调用自己的display()函数
//	//从而出现死递归现象，最后出现程序崩溃，原因是出现栈溢出
//	//display();
//
//	//正确写法
//	Student::display();
//	Teacher::display();
//
//}
//
//void test() {
//	Graduate g1("张三",18);
//	g1.display();
//	//当Graduate类中无showAge(int age)函数时，得在对象名.后加上基类名，不然会产生二义性，不知道用哪个基类的showAge(int age)函数
//	g1.Student::showAge(20);
//	g1.Teacher::showAge(30);
//	//当Graduate类中有showAge(int age)函数时，并且参数类型，个数一样时，这就发生了同名函数的覆盖现象
//	//所以，g1.showAge(22)，调用的是Graduate类的showAge(int age)函数
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