//#include <iostream>
//using namespace std;
//
////��̬��Ա����
////���ж�����ͬһ������
////��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//
//class Person {
//public:
//	//��̬��Ա����
//	static int m_A;
//	//�Ǿ�̬��Ա����
//	int m_B;
//	//��̬��Ա����
//	static void func() {
//		m_A = 100;  //��̬��Ա�������Է��� ��̬��Ա����
//		//m_B = 200;  ������̬��Ա���������Է���  �Ǿ�̬��Ա�������޷����ֵ������ĸ������m_B����
//		cout << "static void func()�ĵ���" << endl;
//	}
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//private:
//	static void func2() {
//		cout << "static void func2()�ĵ���" << endl;
//	}
//
//};
//int Person::m_A = 0;
//
////�����ֵķ��ʷ�ʽ
//void test01() {
//
//	//1��ͨ���������
//	Person p;
//	p.func();
//
//	//2��ͨ����������
//
//	Person::func();
//	//Person::func2();  ����������ʲ���˽�о�̬��Ա����
//
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