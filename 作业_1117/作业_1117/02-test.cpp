//#include <iostream>
//using namespace std;
//
////2����Ԫ��ʽ��<<��>>������������أ�ʵ�ָ�������������룬ע���鲿�������ԡ�
//class Complex {
//private:
//	int m_Real;			//�������鲿
//	int m_Imag;			//������ʵ��
//public:
//	//<<��������ص���Ԫ����
//	friend ostream& operator<<(ostream& output, Complex& c);
//	//>>��������ص���Ԫ����
//	friend istream& operator>>(istream& input, Complex& c);
//	Complex(int real, int imag);
//};
//Complex::Complex(int real = 0, int imag = 0) {
//	m_Real = real;
//	m_Imag = imag;
//}
//ostream& operator<<(ostream &output, Complex &c) {
//	if(c.m_Imag>0){
//		output << "(" << c.m_Real << "+" << c.m_Imag << "i)" << endl;
//	}
//	else {
//		output << "(" << c.m_Real << c.m_Imag << "i)" << endl;
//	}
//	return output;
//}
//istream& operator>>(istream& input, Complex& c) {
//	cout << "�����븴����ʵ�����鲿" << endl;
//	input >> c.m_Real >> c.m_Imag;
//	return input;
//}
//void test01() {
//	Complex c1;
//	cin >> c1;
//	cout << c1;
//}
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}