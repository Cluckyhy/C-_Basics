//#include <iostream>
//using namespace std;
//
////�������������
//
////�Զ�������
//class MyInteger {
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//private:
//	int m_Num;
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	//����ǰ��++�����    ��������Ϊ��һֱ��һ�����ݽ��е�������
//	MyInteger& operator++() { 
//		//�Ƚ���++����
//		m_Num++;
//		//�ٽ�������
//		return *this;
//	}
//
//	//���غ���++�����
//	//void operator++(int)  int����ռλ������������������ǰ�úͺ��õ���
//	MyInteger operator++(int) {
//		//��  ��¼��ʱ���
//		MyInteger temp = *this;
//		//��  �ٽ��е���
//		m_Num++;
//		//��󷵻ؼ�¼���
//		return temp;
//	}
//};
//
////����һ�����������
//ostream& operator<<(ostream &cout,MyInteger myint) {
//	cout << myint.m_Num;
//	return cout;
//}
//
//
//void test01() {
//	MyInteger myint;
//	cout << ++myint << endl;
//	cout << ++(++myint) << endl;
//}
//
//void test02() {
//	MyInteger myint;
//
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//	/*int a = 0;
//	cout << ++a << endl;
//	cout << ++(++a);*/
//
//	getchar();
//	return 0;
//}