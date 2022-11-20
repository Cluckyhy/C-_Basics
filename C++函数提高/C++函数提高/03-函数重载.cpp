#include <iostream>
using namespace std;

//函数重载
//可以让函数名相同，提高复用性

//函数重载的满足条件
//1、同一个作用域下
//2、函数名相同
//3、函数的参数（类型不同  个数不同  顺序不同）


void func03() {
	cout << "this is func03" << endl;
}
void func03(int a) {
	cout << "this is func03(int a)!!" << endl;
}
void func03(double b) {
	cout << "this is func03(double b)!!" << endl;
}
void func03(int a ,double b) {
	cout << "this is func03(int a ,double b)!!" << endl;
}
void func03(double b, int a) {
	cout << "this is func03(double b, int a)!!" << endl;
}

//注意事项
//函数的返回值不可以作为函数重载的条件
//int func03(double b, int a) {
//	cout << "this is func03(double b, int a)!!" << endl;
//	return 0;
//}


int main03() {

	func03();
	func03(2);
	func03(2.12);
	func03(3.14,10);
	func03(2,2.22);

	getchar();
	return 0;
}