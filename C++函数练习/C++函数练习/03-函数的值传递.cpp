#include <iostream>
using namespace std;

//值传递
//定义函数，实现两个数字进行交换功能

//如果一个函数不需要返回值的时候，声明的时候可以写void
void swap03(int num1,int num2) {
	cout << "交换前的数据：" << endl;
	cout << "num1 = " << num1<<endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后的数据：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	//return; 返回值不需要的时候，可以不写return;
}

int main03() {
	int a = 10;
	int b = 20;
	//当我们做值传递的时候，函数的形参发生改变，并不会影响实参
	swap03(a, b);
	cout << "a = "<< a  << endl;
	cout << "b ="<< b << endl;

	getchar();
	return 0;
}