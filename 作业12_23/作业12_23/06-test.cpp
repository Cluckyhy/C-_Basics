//#include <iostream>
//using namespace std;
//
////对复数类添加转换构造函数，将double型转换成复数对象：添加类型转换函数对double的重载：添加加法重载函数，并进行测试
//
//class Complex {
//	friend ostream& operator<<(ostream& output, Complex& c1);
//private:
//	//复数实部
//	double m_Real;
//	//复数虚部
//	double m_Imag;
//public:
//	//构造函数
//	Complex() {};
//	Complex(double real, double imag);
//
//	//转换构造函数
//	//Complex(double real);
//
//	//成员函数的+号重载
//	Complex operator+(Complex c) {
//		Complex c3;
//		c3.m_Real = this->m_Real + c.m_Real;
//		c3.m_Imag = this->m_Imag + c.m_Imag;
//		return c3;
//	}
//
//	//类型转换函数(只能是成员函数,因为转换的主体就是本类的对象)
//	operator double() {
//		return m_Real;
//	}
//
//};
//
////定义构造函数
//Complex::Complex(double real,double imag) {
//	m_Real = real;
//	m_Imag = imag;
//}
//
////定义转换构造函数
////Complex::Complex(double real) {
////	m_Real = real;
////	m_Imag = 0;
////}
//
////对<<号的重写函数
//ostream& operator<<(ostream& output,Complex &c1) {
//	if (c1.m_Imag > 0) {
//		cout << "(" << c1.m_Real << "+" << c1.m_Imag << "i)" << endl;
//	}
//	else {
//		cout << "(" << c1.m_Real << c1.m_Imag << "i)" << endl;
//	}
//	return output;
//}
//
//
//int main() {
//
//	Complex c1(5,3),c2;
//	//c2 = c1 + 2.2;
//	//cout << c2;
//	double c;
//	c = c1 + 3.3;
//	cout << c;
//
//
//
//	getchar();
//	return 0;
//}