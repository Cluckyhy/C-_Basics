//#include <iostream>
//using namespace std;
//#include <string>
//
////3、编写基于对象的程序，完成学生类，类属性包括姓名，学号，性别，
////在类中用带参数的构造函数对属性赋值，并测试多个对象的构造函数和析构函数的调用顺序。
//
////创建一个学生类
//class Student {
//private:
//	string m_Name;  //学生姓名
//	int m_Sno;	  //学生学号
//	string m_Sex;   //学生性别
//public:
//	//默认构造函数
//	Student() {
//		cout << "Student 的默认构造函数被调用" << endl;
//	}
//	//带参构造函数
//	Student(string name,int sno,string sex) {
//		m_Name = name;
//		m_Sno = sno;
//		m_Sex = sex;
//		cout << "Student 带参的构造函数被调用" << endl;
//	}
//	~Student() {
//		cout <<m_Name<< "Student 的析构函数被调用" << endl;
//	}
//};
//
////测试函数
//void test01() {
//	//实例化一个无参的学生对象
//	Student s1;
//	//实例化一个有参的学生对象
//	Student("张三", 5210766, "男");
//
//	//先创建的对象构造函数先调用，而析构函数恰恰相反
//}
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}