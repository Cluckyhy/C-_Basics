//#include <iostream>
//using namespace std;
//
////��ʼ���б�
//
//class Person {
//public:
//
//	//��ͳ��ʼ������
//	/*Person(int a, int b, int c) {
//		m_A = a;
//		m_B = b;
//		m_C = c;
//	}*/
//	
//	//��ʼ���б��ʼ����ֵ,ͨ������
//	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {}
//
//	//�ڶ���,���Ǵ�����ʽ��д����ֵ��C++11�������
//	Person() :m_A(10), m_B(20), m_C(30) {}
//
//	
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//void test01() {
//
//	Person p(33,44,55);
//	Person p2;
//	cout << "m_A = " << p.m_A << endl;
//	cout << "m_B = " << p.m_B << endl;
//	cout << "m_C = " << p.m_C << endl;
//	cout << "m_A = " << p2.m_A << endl;
//	cout << "m_B = " << p2.m_B << endl;
//	cout << "m_C = " << p2.m_C << endl;
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