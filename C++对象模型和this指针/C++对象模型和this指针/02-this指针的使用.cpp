//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	int age;
//	Person(int age) {
//		//thisָ��ָ�� �����õĳ�Ա���� �����Ķ���
//		this->age = age;
//	}
//
//	//��������÷���ֵ��Person ���һֱ��20����Ϊ���ص���һ���µĶ���
//	Person& PersonAddage(Person &p) {
//		
//		//thisָ��p2��ָ�룬��*this����p2���������
//		this->age += p.age;
//		return *this;
//	}
//};
//
////1������βκͳ�Ա�������Ƴ�ͻ
//void test01() {
//	Person p1(18);
//	cout << "p1������Ϊ�� " << p1.age << endl;
//}
//
////2�����ض�������*this
//void test02() {
//	Person p1(10);
//	Person p2(10);
//
//	//��ʽ���˼��
//	p2.PersonAddage(p1).PersonAddage(p1).PersonAddage(p1);
//	cout << "p2������Ϊ��" << p2.age << endl;
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