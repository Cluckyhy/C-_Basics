//#include <iostream>
//using namespace std;
//
////复数类Complex，实现拷贝构造函数，重载+,-和前置和后置++运算符（实部加1）
//
//class Complex {
//	friend ostream& operator<<(ostream& output, Complex c1);
//	//friend Complex& operator++(Complex& c1);
//	//复数实部
//	double m_Real;
//	//复数虚部
//	double m_Imag;
//	
//public:
//	//构造函数
//	Complex() {};
//	Complex(double real, double imag);
//
//	//拷贝构造函数
//	Complex(const Complex& c);
//
//	//用成员函数方式对+号重载，实现两个复数相加
//	Complex& operator+(Complex &c1) {
//		Complex c3;
//		c3.m_Real = this->m_Real + c1.m_Real;
//		c3.m_Imag = this->m_Imag + c1.m_Imag;
//		return c3;
//	}
//	//用成员函数的方式对-号重载，实现两个复数相减
//	Complex& operator-(Complex &c1) {
//		Complex c3;
//		c3.m_Real = this->m_Real - c1.m_Real;
//		c3.m_Imag = this->m_Imag - c1.m_Imag;
//		return c3;
//	}
//	//用成员函数的方式对前置++号重载，实现对复数的实部加1操作
//	Complex& operator++() {
//		++m_Real;
//		return *(this);
//	}
//	//用成员函数的方式对后置++号重载，实现对复数的实部先取值，后加1操作
//	Complex operator++(int) {
//		Complex temp = *(this);
//		m_Real++;
//		return temp;
//	}
//
//};
//
////有参构造函数定义
//Complex::Complex(double real,double imag) {
//	m_Real = real;
//	m_Imag = imag;
//}
//
////拷贝构造函数的定义
//Complex::Complex(const Complex& c) {
//	m_Real = c.m_Real;
//	m_Imag = c.m_Imag;
//}
//
////友元函数形式对<<号的重载
//ostream& operator<<(ostream &output,Complex c1) {
//	if (c1.m_Imag > 0) {
//		output << "(" << c1.m_Real << "+" << c1.m_Imag << "i)" << endl;
//	}
//	else {
//		output << "(" << c1.m_Real << c1.m_Imag << "i)" << endl;
//	}
//	return output;
//}
//
//////用友元函数的形式对前置++号重载
////Complex& operator++(Complex& c1) {
////	++c1.m_Real;
////	return c1;
////}
//
////用友元函数的形式对后置++号重载
////void operator++(int) {
////
////}
//
//
//
//
//int main() {
//
//	Complex c1(2, 3);
//	Complex c2(c1);
//	cout << c2 << endl;
//	++c2;
//	cout << c2 << endl;
//	Complex c3;
//	c3 = c2++;
//	cout << c3 << endl;
//	cout << c2;
//
//
//
//	getchar();
//	return 0;
//}