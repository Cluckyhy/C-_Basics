//#include <iostream>
//using namespace std;
//
////2、友元形式对<<和>>运算符进行重载，实现复数的输出和输入，注意虚部的正负性。
//class Complex {
//private:
//	int m_Real;			//复数的虚部
//	int m_Imag;			//复数的实部
//public:
//	//<<运算符重载的友元函数
//	friend ostream& operator<<(ostream& output, Complex& c);
//	//>>运算符重载的友元函数
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
//	cout << "请输入复数的实部和虚部" << endl;
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