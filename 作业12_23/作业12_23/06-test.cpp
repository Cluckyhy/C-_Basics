//#include <iostream>
//using namespace std;
//
////�Ը��������ת�����캯������double��ת���ɸ��������������ת��������double�����أ���Ӽӷ����غ����������в���
//
//class Complex {
//	friend ostream& operator<<(ostream& output, Complex& c1);
//private:
//	//����ʵ��
//	double m_Real;
//	//�����鲿
//	double m_Imag;
//public:
//	//���캯��
//	Complex() {};
//	Complex(double real, double imag);
//
//	//ת�����캯��
//	//Complex(double real);
//
//	//��Ա������+������
//	Complex operator+(Complex c) {
//		Complex c3;
//		c3.m_Real = this->m_Real + c.m_Real;
//		c3.m_Imag = this->m_Imag + c.m_Imag;
//		return c3;
//	}
//
//	//����ת������(ֻ���ǳ�Ա����,��Ϊת����������Ǳ���Ķ���)
//	operator double() {
//		return m_Real;
//	}
//
//};
//
////���幹�캯��
//Complex::Complex(double real,double imag) {
//	m_Real = real;
//	m_Imag = imag;
//}
//
////����ת�����캯��
////Complex::Complex(double real) {
////	m_Real = real;
////	m_Imag = 0;
////}
//
////��<<�ŵ���д����
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