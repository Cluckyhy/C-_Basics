//#include <iostream>
//using namespace std;
//
//class Complex {
//private:
//	double m_real;
//	double m_imag;
//public:
//	friend Complex operator+(Complex c1, Complex c2);
//	Complex(int r = 0, int i = 0) :m_real(r), m_imag(i) {};
//	Complex(double r);
//	//operator double();
//	void display();
//};
//
//Complex::Complex(double r) {
//	m_real = r;
//	m_imag = 0;
//}
////Complex::operator double() {
////	return m_real;
////}
//Complex operator+(Complex c1, Complex c2) {
//	return Complex(c1.m_real + c2.m_real, c1.m_imag + c2.m_imag);
//}
//void Complex::display() {
//	cout << "(" << m_real << "," << m_imag << "i)" << endl;
//}
//void test01() {
//	Complex c1(3,4), c2(5,-10), c3;
//	c3 = c1 + 2.5;
//	c3 = 3.5 + c2;
//	c3.display();
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