#include <iostream>
using namespace std;
//方法一：直接传值
//void swap(int a, int b);
//方法二：传指针
//void swap(int *p1,int *p2);
//方法三：传引用
void swap(int& a, int& b);

int main06() {
	int num1 = 5, num2 = 8;
	//方法一：直接传值
	//swap(num1,num2); 
	//方法二：传入指针
	//swap(&num1,&num2);
	//方法三：传引用
	swap(num1, num2);
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	getchar();
	return 0;
}
//用传值的方式  （不可交换两个数的值）num1=5,num2=8;
//void swap(int a,int b) { 
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}

//用传指针的方式  （可交换两个数的值）num1=8,num2=5;
//void swap(int *p1,int *p2) {
//	int temp;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}

//用传引用的方式  （）
void swap(int& a, int& b) {
	/*int& num1 = a;
	int& num2 = b;*/
	int temp;
	temp = a;
	a = b;
	b = temp;
}