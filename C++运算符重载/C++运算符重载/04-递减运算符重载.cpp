//#include <iostream>
//using namespace std;
//
////�ݼ����������
//
////�Զ���һ������
//class MyInteger {
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//private:
//	int m_Num;
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	//����ǰ��--�����
//	MyInteger& operator--() {
//		m_Num--;
//		return *this;
//	}
//
//	//���غ���--�����
//	MyInteger operator--(int) {
//		//�� ��¼���
//		MyInteger temp = *this;
//		//�� ���еݼ�����
//		m_Num--;
//		//��󽫼�¼�Ľ������
//		return temp;
//	}
//
//};
//
////�������������
//ostream& operator<<(ostream &cout, MyInteger myint) {
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01() {
//	MyInteger myint;
//	cout << --(--myint) << endl;
//}
//void test02() {
//	MyInteger myint;
//	cout << myint-- << endl;
//	cout << myint << endl;
//}
//
//
//int main() {
//
//	//test01();
//	test02();
//
//	getchar();
//	return 0;
//}