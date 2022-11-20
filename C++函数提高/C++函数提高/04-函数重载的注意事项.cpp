#include <iostream>
using namespace std;

//函数重载的注意事项
//1、引用作为重载的条件
void func04(int &a) {   // int &a = 10; 不合法的
	cout << "func04(int &a)调用" << endl;
}

void func04(const int &a) {   //const int &a = 10; 合法的语法
	cout << "func04(const int &a)调用" << endl;
}
//2、函数重载碰到默认参数 
//当我写函数重载的时候就不要写默认参数了
void func_04(int a,int b=10) {
	cout << "func_04(int a,int b)的调用" << endl;
}
void func_04(int a) {
	cout << "func_04(int a)的调用" << endl;
}

int main() {

	/*int a = 10;
	func04(a);*/
	//func04(10);
	//func_04(2);   //当函数重载碰到了默认参数，出现了二义性，报错，尽量避免这种情况
	func_04(10, 20);

	getchar();
	return 0;
}