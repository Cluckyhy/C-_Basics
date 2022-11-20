#include <iostream>
using namespace std;

int main02() {
	//指针所占内存空间
	int a = 10;
	/*int* p;
	p = &a;*/
	int* p = &a;
	//在32位操作系统下，指针都是占4个字节空间大小，不管是什么数据类型
	//在64位操作系统下，指针都是占8个字节空间大小，不管是什么数据类型
	cout << "sizeof int*P = " << sizeof(p)<< endl;
	cout << "sizeof char = " << sizeof(char *) << endl;
	cout << "sizeof float = " << sizeof(float *) << endl;
	cout << "sizeof double = " << sizeof(double *) << endl;


	getchar();
	return 0;
}