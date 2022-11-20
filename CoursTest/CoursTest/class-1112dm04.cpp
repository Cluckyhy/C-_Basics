//#include <iostream>
//using namespace std;
//
////输入流运算符重载
//
//class Complex {
//private:
//	double m_real;
//	double m_imag;
//public:
//	friend istream& operator>>(istream& input, Complex& c);
//	friend ostream& operator<<(ostream& out, Complex& c);
//	Complex(int r = 0, int i = 0):m_real(r), m_imag(i) {};
//	Complex operator+(Complex &c2);
//};
//
//Complex Complex::operator+(Complex& c2) {
//	Complex c3;
//	c3.m_real = m_real + c2.m_real;
//	c3.m_imag = m_imag + c2.m_imag;
//	return c3;
//}
//istream& operator>>(istream& input,Complex &c) {
//	cout << "请输入复数的实部和虚部" << endl;
//	input >> c.m_real >> c.m_imag;
//	return input;
//}
//ostream& operator<<(ostream& out, Complex& c) {
//	out << "(" << c.m_real << "," << c.m_imag << ")" << endl;
//	return out;
//}
//
//
//
//int main() {
//	//int i = 5;
//	Complex c1, c2, c3;
//	cin >> c1;
//	cin >> c2;
//	c3 = c1 + c2;
//	cout << c3;
//
//
//	getchar();
//	return 0;
//}