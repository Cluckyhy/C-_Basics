//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	int age;
//	Person(int age) {
//		//this指针指向 被调用的成员函数 所属的对象
//		this->age = age;
//	}
//
//	//如果这里用返回值是Person 则就一直是20，因为返回的是一个新的对象
//	Person& PersonAddage(Person &p) {
//		
//		//this指向p2的指针，而*this就是p2这个对象本体
//		this->age += p.age;
//		return *this;
//	}
//};
//
////1、解决形参和成员变量名称冲突
//void test01() {
//	Person p1(18);
//	cout << "p1的年龄为： " << p1.age << endl;
//}
//
////2、返回对象本身用*this
//void test02() {
//	Person p1(10);
//	Person p2(10);
//
//	//链式编程思想
//	p2.PersonAddage(p1).PersonAddage(p1).PersonAddage(p1);
//	cout << "p2的年龄为：" << p2.age << endl;
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