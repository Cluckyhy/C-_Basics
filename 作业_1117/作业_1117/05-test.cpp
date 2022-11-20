//#include <iostream>
//using namespace std;
//
//class Complex {
//private:
//	double real;
//	double imag;
//public:
//	friend Complex operator+(Complex c1, Complex c2);
//	//friend Complex operator+(Complex c1, double b);
//	Complex() {}
//	Complex(double r, double i);
//	Complex(double r) {
//		real = r;
//		imag = 0;
//	}
//	void display();
//};
//Complex::Complex(double r, double i) {
//	real = r;
//	imag = i;
//}
//Complex operator+(Complex c1, Complex c2) {
//	return Complex(c1.real + c2.real, c1.imag + c2.imag);
//}
////Complex operator+(Complex c1, double b) {
////	return Complex(c1.real+b,c1.imag+0);
////}
//void Complex::display() {
//	cout << "(" << real << "," << imag << "i)" << endl;
//}
//
//
//int main() {
//
//	Complex c1(3, 4), c2(5, -10), c3,c4;
//	c3 = c1 + 2.5;
//	c4 = c2 + 3.3;
//	c3.display();
//	c4.display();
//
//	getchar();
//	return 0;
//}