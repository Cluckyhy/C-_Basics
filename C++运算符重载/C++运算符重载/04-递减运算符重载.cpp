//#include <iostream>
//using namespace std;
//
////递减运算符重载
//
////自定义一个整型
//class MyInteger {
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//private:
//	int m_Num;
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	//重载前置--运算符
//	MyInteger& operator--() {
//		m_Num--;
//		return *this;
//	}
//
//	//重载后置--运算符
//	MyInteger operator--(int) {
//		//先 记录结果
//		MyInteger temp = *this;
//		//后 进行递减运算
//		m_Num--;
//		//最后将记录的结果返回
//		return temp;
//	}
//
//};
//
////左移运算符重载
//ostream& operator<<(ostream &cout, MyInteger myint) {
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01() {
//	MyInteger myint;
//	cout << --(--myint) << endl;
//}
//void test02() {
//	MyInteger myint;
//	cout << myint-- << endl;
//	cout << myint << endl;
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