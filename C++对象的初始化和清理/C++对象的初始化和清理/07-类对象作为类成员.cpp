//#include <iostream>
//using namespace std;
//#include <string>
//
////类对象作为类成员
//
////手机类
//class Phone {
//public:
//	//手机品牌名：
//	string m_PName;
//	//手机类构造函数
//	Phone(string pname) {
//		cout << "Phone 的构造函数调用" << endl;
//		m_PName = pname;
//	}
//	~Phone() {
//		cout << "Phone 的析构函数调用" << endl;
//	}
//};
//
////人类
//class Person {
//public:
//
//	//姓名
//	string m_Name;
//	//手机
//	Phone m_Phone;
//	
//	//人类构造函数
//	//Phone m_Phone = pName;  隐式转换法
//	Person(string name, string pName) :m_Name(name), m_Phone(pName) {
//		cout << "Person 的构造函数调用" << endl;
//	}
//	//人类的析构函数
//	~Person() {
//		cout << "Person 的析构函数调用" << endl;
//	}
//};
//
////当其他类对象作为本类成员，构造的时候先构造类对象，再构造自身，析构函数的顺序与构造相反
//
//
//void test01() {
//	Person p("张三", "苹果MAX");
//	
//	cout << p.m_Name << "拿着： " << p.m_Phone.m_PName << endl;
//}
//
//int main() {
//
//	test01();
//	getchar();
//	return 0;
//}