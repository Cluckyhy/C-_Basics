//#include <iostream>
//using namespace std;
//
////空指针调用成员函数
//
//class Person {
//public:
//	int m_Age;
//	void showClassName() {
//		cout << "this is Person class" << endl;
//	}
//	
//	void showPersonAge() {
//		//报错原因是因为传入的指针是为NULL
//		if (this == NULL) {
//			return;
//		}
//		cout << "age = " << m_Age << endl;
//	}
//};
//
//void test01() {
//
//	Person* p = NULL;
//
//	//p->showClassName();
//
//	p->showPersonAge();
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