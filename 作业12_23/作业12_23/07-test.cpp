//#include <iostream>
//using namespace std;
//
////������Complex��ʵ�ֿ������캯��������+,-��ǰ�úͺ���++�������ʵ����1��
//
//class Complex {
//	friend ostream& operator<<(ostream& output, Complex c1);
//	//friend Complex& operator++(Complex& c1);
//	//����ʵ��
//	double m_Real;
//	//�����鲿
//	double m_Imag;
//	
//public:
//	//���캯��
//	Complex() {};
//	Complex(double real, double imag);
//
//	//�������캯��
//	Complex(const Complex& c);
//
//	//�ó�Ա������ʽ��+�����أ�ʵ�������������
//	Complex& operator+(Complex &c1) {
//		Complex c3;
//		c3.m_Real = this->m_Real + c1.m_Real;
//		c3.m_Imag = this->m_Imag + c1.m_Imag;
//		return c3;
//	}
//	//�ó�Ա�����ķ�ʽ��-�����أ�ʵ�������������
//	Complex& operator-(Complex &c1) {
//		Complex c3;
//		c3.m_Real = this->m_Real - c1.m_Real;
//		c3.m_Imag = this->m_Imag - c1.m_Imag;
//		return c3;
//	}
//	//�ó�Ա�����ķ�ʽ��ǰ��++�����أ�ʵ�ֶԸ�����ʵ����1����
//	Complex& operator++() {
//		++m_Real;
//		return *(this);
//	}
//	//�ó�Ա�����ķ�ʽ�Ժ���++�����أ�ʵ�ֶԸ�����ʵ����ȡֵ�����1����
//	Complex operator++(int) {
//		Complex temp = *(this);
//		m_Real++;
//		return temp;
//	}
//
//};
//
////�вι��캯������
//Complex::Complex(double real,double imag) {
//	m_Real = real;
//	m_Imag = imag;
//}
//
////�������캯���Ķ���
//Complex::Complex(const Complex& c) {
//	m_Real = c.m_Real;
//	m_Imag = c.m_Imag;
//}
//
////��Ԫ������ʽ��<<�ŵ�����
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
//////����Ԫ��������ʽ��ǰ��++������
////Complex& operator++(Complex& c1) {
////	++c1.m_Real;
////	return c1;
////}
//
////����Ԫ��������ʽ�Ժ���++������
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