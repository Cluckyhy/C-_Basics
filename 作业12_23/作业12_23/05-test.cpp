//#include <iostream>
//using namespace std;
//
////友元形式对<<和>>运算符进行重载，实现复数的输出和输入，注意虚部的正负性
//
////复数类
//class Complex {
//	friend ostream& operator<<(ostream& output, Complex& c1);
//	friend istream& operator>>(istream& input, Complex& c1);
//private:
//	//复数实部
//	double real;
//	//复数虚部
//	double imag;
//};
//
////友元形式实现对<<的重载
//ostream& operator<<(ostream& output,Complex &c1) {
//	if (c1.imag > 0) {
//		output << "(" << c1.real << "+" << c1.imag << "i)" << endl;
//	}
//	else {
//		output<< "(" << c1.real << c1.imag << "i)" << endl;
//	}
//	return output;
//}
////友元形式实现对>>的重载
//istream& operator>>(istream& input,Complex &c1){
//	cout << "请输入复数的实部和虚部" << endl;
//	input >> c1.real >> c1.imag;
//	return input;
//}
//
//
//int main() {
//
//	Complex c1;
//	cin >> c1;
//	cout << "复数为：" << endl;
//	cout << c1;
//
//
//	getchar();
//	return 0;
//}