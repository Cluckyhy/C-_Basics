#include <iostream>
using namespace std;

void func05(int &ref) {
	ref = 100;  //ref是引用，转换为*ref = 100;
}

int main05() {

	int a = 10;
	//编译器自动转化为 int* const ref = &a;指针常量是指针指向不可以改，也说明为什么引用不可以更改
	int& ref = a;
	ref = 20;	//内部发现ref是引用，自动帮我们转化为: *ref = 20;

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	func05(a);
	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	getchar();
	return 0;
}