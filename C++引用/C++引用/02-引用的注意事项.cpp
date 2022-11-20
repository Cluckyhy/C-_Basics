#include <iostream>
using namespace std;

int main02() {

	int a = 10;
	//int& b = a;
	//1、引用必须初始化
	//int& b;  //错误，必须要初始化
	int& b = a;
	//2、引用一旦初始化后就不可以更改了
	int c = 20;
	b = c;  //赋值操作，而不是更改引用
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	//int& b = c;  //报错，上面定义了b为a的引用，就不可以更改了
	//cout << b << endl;

	getchar();
	return 0;
}