#include <iostream>
using namespace std;

//函数的定义
//语法：
// 返回值类型  函数名 （参数列表）{ 函数体语句  return 表达式 }

//加法函数，实现两个整型相加，并且将相加的结果进行返回
//函数定义的时候，num1，num2并没有真实数据，他只是形式上的一个参数，简称形参
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}


int main02() {
	//main函数中去调用add函数
	int a = 10;
	int b = 20;
	//函数调用的语法；函数名称（参数）
	//a和b 称为实际参数，简称实参
	//当函数调用时实参的值会传递给形参
	int result = add(a,b);
	cout << "两个数相加的和为： " << result << endl;

	getchar();
	return 0;
}