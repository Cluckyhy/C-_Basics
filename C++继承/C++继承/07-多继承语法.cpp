//#include <iostream>
//using namespace std;
//
////��̳��﷨
//
//class Base1 {
//public:
//	int m_A;
//	Base1() {
//		m_A = 100;
//	}
//};
//class Base2 {
//public:
//	int m_A;
//	Base2() {
//		m_A = 200;
//	}
//};
//
////����   ��Ҫ�̳�Base1��Base2
////�﷨   class ���ࣺ�̳з�ʽ  ����1���̳з�ʽ ����2....
//class Son :public Base1, public Base2 {
//public:
//	int m_C;
//	int m_D;
//	Son() {
//		m_C = 300;
//		m_D = 400;
//	}
//};
//void test01() {
//	Son s;
//	cout <<"size of = "<< sizeof(Son) << endl;
//	//�������г���ͬ����Ա����Ҫ������������
//	cout << "Base1  m_A = " << s.Base1::m_A << endl;
//	cout << "Base2  m_A = " << s.Base2::m_A << endl;
//}
//
//
//int main() {
//
//	//cout << sizeof(Son) << endl;
//	test01();
//
//	getchar();
//	return 0;
//}