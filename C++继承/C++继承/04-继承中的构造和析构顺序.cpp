//#include <iostream>
//using namespace std;
//
////继承中的构造和析构顺序
//
//class Base {
//public:
//	Base() {
//		cout << "Base构造函数被调用" << endl;
//	}
//	~Base() {
//		cout << "Base析构函数被调用" << endl;
//	}
//};
//
//class Son :public Base {
//public:
//	Son(){
//		cout << "Son的构造函数被调用" << endl;
//	}
//	~Son() {
//		cout << "Son的析构函数被调用" << endl;
//	}
//};
//
//void test01() {
//	//Base b1;
//	//继承中的构造和析构顺序如下：
//	//先构造父类，再构造子类，析构的顺序与构造的顺序相反
//	Son s1;
//}
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}