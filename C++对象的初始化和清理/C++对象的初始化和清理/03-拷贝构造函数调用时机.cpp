//#include <iostream>
//using namespace std;
//
////�������캯������ʱ��
//
//
//class Person {
////private:
//public:
//	int m_Age;
//public:
//
//	Person() {
//		cout << "Person Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age) {
//		cout << "Person �вι��캯������" << endl;
//		m_Age = age;
//	}
//	Person(const Person& p) {
//		cout << "Person �������캯������" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person() {
//		cout << "Person ������������" << endl;
//	}
//
//
//};
//
////1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01() {
//	Person p1(20);
//	Person p2(p1);
//	cout << "P2������Ϊ��" << p2.m_Age << endl;
//}
//
////2��ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p) {
//	p.m_Age = 1000;
//	cout << "doWork�е�ageֵΪ�� " << p.m_Age << endl;
//}
//void test02() {
//	Person p(20);
//	doWork(p);
//	cout << "test02��age��ֵΪ�� " << p.m_Age << endl;
//}
//
////3��ֵ��ʽ���ؾֲ�����
//Person doWork2() {
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void test03() {
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//	
//}
//
//
//int main() {
//
//	//test01();
//	//test02();
//	test03();
//
//	getchar();
//	return 0;
//}