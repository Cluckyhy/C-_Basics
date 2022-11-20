//#include <iostream>
//using namespace std;
//
////继承中同名成员处理
//class Base {
//public:
//	int m_A;
//	Base() {
//		m_A = 100;
//	}
//	void func() {
//		cout << "Base - func()的调用" << endl;
//	}
//	void func(int a) {
//		cout << "Base - func(int a)的调用" << endl;
//	}
//};
//
//class Son :public Base {
//public:
//	int m_A;
//	Son() {
//		m_A = 200;
//	}
//	void func() {
//		cout << "Son - func()的调用" << endl;
//	}
//};
//
////同名成员属性处理
//void test01() {
//	Son s1;
//	cout <<"Son 下 m_A = "<< s1.m_A << endl;
//	//如果通过子类对象  访问到父类中同名成员，需要加作用域
//	cout << "Base 下 m_A = " << s1.Base::m_A << endl;   
//}
//
////同名成员函数处理
//void test02() {
//	Son s2;
//	s2.func();          //直接调用  调用是子类中的同名成员
//	s2.Base::func();    //加上作用域  调用的是父类的成员
//	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类所有同名成员函数
//	//s2.func(100);
//	//如果想访问到父类中被隐藏的同名成员函数，需要加作用域
//	s2.Base::func(100);
//}
//
//
//int main() {
//
//	//test01();
//	test02();
//
//	getchar();
//	return 0;
//}