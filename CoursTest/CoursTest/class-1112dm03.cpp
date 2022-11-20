//#include <iostream>
//using namespace std;
//
//class Complex {
//private:
//	double m_real;
//	double m_imag;
//public:
//	friend ostream& operator<<(ostream&, Complex&);
//	Complex(int r=0, int i=0) :m_real(r),m_imag(i) {};
//	Complex operator+(Complex &c2);
//};
//Complex Complex::operator+(Complex &c2) {
//	Complex c3;
//	c3.m_real = m_real + c2.m_real;
//	c3.m_imag = m_imag + c2.m_imag;
//	return c3;
//}
//ostream& operator<<(ostream &out,Complex &c) {
//	if (c.m_imag > 0) {
//		out << "(" << c.m_real << "+" << c.m_imag << "i)" << endl;
//	}
//	else{
//		out << "(" << c.m_real << c.m_imag << "i)" << endl;
//	}
//	return out;
//}
//
//int main() {
//
//	Complex c1(2, -3),c2(3,1),c3;
//	c3 = c1 + c2;
//	cout << c3;
//
//	getchar();
//	return 0;
//}