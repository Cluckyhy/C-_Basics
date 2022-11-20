#include <iostream>
using namespace std;

//函数默认参数
//如果我们自己传入数据，就用自己的数据，如果没有，那么用默认值
//语法：返回值类型 函数名（形参=默认值	）{}

int func(int num1,int num2=30,int num3=30) {
	return num1 + num2 + num3;
}


//注意事项
//1、如果某个位置已经出现默认参数，那么从这个位置往后，从左往右都必须有默认值
//int func2(int a, int b = 2, int c) {
//	return a + b + c;
//}
//2、如果函数声明有默认参数，函数实现就不能有默认参数了
//	 声明和实现只能有一个有默认参数
int func2(int a, int b);
int func2(int a=50, int b=10) {
	return a + b;
}

int main01() {

	//cout <<"三个数相加为： "<< func(10, 20) << endl;
	cout << func2(10, 20) << endl;
	getchar();
	return 0;
}