//#include <iostream>
//using namespace std;
//
////初始化列表
//
//class Person {
//public:
//
//	//传统初始化操作
//	/*Person(int a, int b, int c) {
//		m_A = a;
//		m_B = b;
//		m_C = c;
//	}*/
//	
//	//初始化列表初始化初值,通过传参
//	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {}
//
//	//第二种,不是传参形式，写死的值，C++11后可以用
//	Person() :m_A(10), m_B(20), m_C(30) {}
//
//	
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//void test01() {
//
//	Person p(33,44,55);
//	Person p2;
//	cout << "m_A = " << p.m_A << endl;
//	cout << "m_B = " << p.m_B << endl;
//	cout << "m_C = " << p.m_C << endl;
//	cout << "m_A = " << p2.m_A << endl;
//	cout << "m_B = " << p2.m_B << endl;
//	cout << "m_C = " << p2.m_C << endl;
//}
//
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}