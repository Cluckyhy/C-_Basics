//#include <iostream>
//using namespace std;
//
////3���Ը��������ת�����캯������double��ת���ɸ�������
////   �������ת��������double�����أ���Ӽӷ����غ����������в��ԡ�
//
//class Complex {
//private:
//	double m_Real;
//	double m_Imag;
//public:
//	//friend Complex operator+(Complex c1, Complex c2);
//	Complex(double real, double imag);
//	//ת�����캯��
//	Complex(double& b);
//	//����ת����������double�����ء�
//	operator double();
//	//�ӷ����غ���
//	//Complex& operator+(Complex &c);
//	//��ӡ���
//	void display() {
//		if (m_Imag > 0) {
//			cout << "(" << m_Real << "+" << m_Imag << "i)" << endl;
//		}
//		else {
//			cout << "(" << m_Real << m_Imag << "i)" << endl;
//		}
//	}
//};
//Complex::Complex(double real = 0, double imag = 0) {
//	m_Real = real;
//	m_Imag = imag;
//}
//Complex::Complex(double& b) {
//	m_Real = b;
//	m_Imag = 0;
//}
////Complex& Complex::operator+(Complex& c) {
////	Complex c3;
////	c3.m_Real = m_Real + c.m_Real;
////	c3.m_Imag = m_Imag + c.m_Imag;
////	return c3;
////}
//Complex::operator double() {
//	return m_Real;
//}
////Complex operator+(Complex c1, Complex c2) {
////	return Complex(c1.m_Real + c2.m_Real, c1.m_Imag + c2.m_Imag);
////}
//
//void test01() {
//	Complex c1(2,5),c2(5,-3),c3,c4;
//	//c3 = c1 + 2.3;
//	//c4 = 2.5 + c2;
//	//c3.display();
//	//c4.display();
//	double d,d2;
//	d = c1 + 5.5;
//	d2 = 7.7 + c2;
//	cout << d << endl;
//	cout << d2 << endl;
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