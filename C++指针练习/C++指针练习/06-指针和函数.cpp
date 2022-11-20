#include <iostream>
using namespace std;
//实现两个数字进行交换
void swap01(int a,int b);
void swap02(int *p1,int *p2);


int main06() {
	//指针和函数
	//1、值传递  不会改变实参的值
	int a = 10;
	int b = 20;
	swap01(a,b);
	cout << "值传递-a =" << a << endl;
	cout << "值传递-b =" << b << endl;

	//2、地址传递  会改变实参的值
	swap02(&a,&b);
	cout << "地址传递-a =" << a << endl;
	cout << "地址传递-b =" << b << endl;
	getchar();
	return 0;
}
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a =" << a << endl;
	cout << "swap01 b =" << b << endl;
}
void swap02(int *p1,int *p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}