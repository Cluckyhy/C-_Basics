//#include <iostream>
//using namespace std;
//
////��Ԫ��ʽ��<<��>>������������أ�ʵ�ָ�������������룬ע���鲿��������
//
////������
//class Complex {
//	friend ostream& operator<<(ostream& output, Complex& c1);
//	friend istream& operator>>(istream& input, Complex& c1);
//private:
//	//����ʵ��
//	double real;
//	//�����鲿
//	double imag;
//};
//
////��Ԫ��ʽʵ�ֶ�<<������
//ostream& operator<<(ostream& output,Complex &c1) {
//	if (c1.imag > 0) {
//		output << "(" << c1.real << "+" << c1.imag << "i)" << endl;
//	}
//	else {
//		output<< "(" << c1.real << c1.imag << "i)" << endl;
//	}
//	return output;
//}
////��Ԫ��ʽʵ�ֶ�>>������
//istream& operator>>(istream& input,Complex &c1){
//	cout << "�����븴����ʵ�����鲿" << endl;
//	input >> c1.real >> c1.imag;
//	return input;
//}
//
//
//int main() {
//
//	Complex c1;
//	cin >> c1;
//	cout << "����Ϊ��" << endl;
//	cout << c1;
//
//
//	getchar();
//	return 0;
//}