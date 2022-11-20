//#include <iostream>
//using namespace std;
//
////拷贝构造函数调用时机
//
//
//class Person {
////private:
//public:
//	int m_Age;
//public:
//
//	Person() {
//		cout << "Person 默认构造函数调用" << endl;
//	}
//	Person(int age) {
//		cout << "Person 有参构造函数调用" << endl;
//		m_Age = age;
//	}
//	Person(const Person& p) {
//		cout << "Person 拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person() {
//		cout << "Person 析构函数调用" << endl;
//	}
//
//
//};
//
////1、使用一个已经创建完毕的对象来初始化一个新对象
//void test01() {
//	Person p1(20);
//	Person p2(p1);
//	cout << "P2的年龄为：" << p2.m_Age << endl;
//}
//
////2、值传递的方式给函数参数传值
//void doWork(Person p) {
//	p.m_Age = 1000;
//	cout << "doWork中的age值为： " << p.m_Age << endl;
//}
//void test02() {
//	Person p(20);
//	doWork(p);
//	cout << "test02中age的值为： " << p.m_Age << endl;
//}
//
////3、值方式返回局部对象
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