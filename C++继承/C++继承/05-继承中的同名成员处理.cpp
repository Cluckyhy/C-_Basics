//#include <iostream>
//using namespace std;
//
////�̳���ͬ����Ա����
//class Base {
//public:
//	int m_A;
//	Base() {
//		m_A = 100;
//	}
//	void func() {
//		cout << "Base - func()�ĵ���" << endl;
//	}
//	void func(int a) {
//		cout << "Base - func(int a)�ĵ���" << endl;
//	}
//};
//
//class Son :public Base {
//public:
//	int m_A;
//	Son() {
//		m_A = 200;
//	}
//	void func() {
//		cout << "Son - func()�ĵ���" << endl;
//	}
//};
//
////ͬ����Ա���Դ���
//void test01() {
//	Son s1;
//	cout <<"Son �� m_A = "<< s1.m_A << endl;
//	//���ͨ���������  ���ʵ�������ͬ����Ա����Ҫ��������
//	cout << "Base �� m_A = " << s1.Base::m_A << endl;   
//}
//
////ͬ����Ա��������
//void test02() {
//	Son s2;
//	s2.func();          //ֱ�ӵ���  �����������е�ͬ����Ա
//	s2.Base::func();    //����������  ���õ��Ǹ���ĳ�Ա
//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص���������ͬ����Ա����
//	//s2.func(100);
//	//�������ʵ������б����ص�ͬ����Ա��������Ҫ��������
//	s2.Base::func(100);
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