#include <iostream>
#include <string.h>
using namespace std;
	//有默认参数就不要用重载了
	/*int max(int a,int b) {
		if (a>b) {
			return a;
		}
		else {
			return b;
		}
	}
	int max(int a,int b, int c) {
		if (b>a) {
			a = b;
		}
		if (c>a) {
			a = c;
		}
		return a;
	}*/
	//template <typename T>
	//T max(T a,T b,T c) {
	//	if (b>a) {
	//		a = b;
	//	}
	//	if (c>a) {
	//		a = c;
	//	}
	//	return a;
	//}
	//void swap(int a, int b) {
	//	int temp;
	//	temp = a; a = b; b = temp;
	//}
	//void swap(int *p1,int *p2) {
	//	int temp;
	//	temp =*p1; *p1 = *p2; *p2 = temp;
	//}
	//void swap(int &a, int &b) {
	//	int temp;
	//	temp = a; a = b; b = temp;
	//}


int main1() {
	/*int a, b, c;
	cin >> a >> b >> c;
	cout << "max_2=" << max(a,b) << endl;
	cout << "max_3=" << max(a, b,c) << endl;*/
	/*int a = 45, b = -42, c = 23;
	double d = 23.3, e = 89.25, f = 56.3;
	long h = 45456, j = 89798798, k = 4545679;
	int max_i = max(a,b,c);
	double max_d = max(d,e,f);
	long max_l = max(h,j,k);
	cout << "max_i=" << max_i << endl;
	cout << "max_d=" << max_d << endl;
	cout << "max_l=" << max_l << endl;*/
	/*int i = 5, j = 6;*/
	/*int& a = i;
	int& b = j;*/
	//swap(i,j);
	//cout << "i=" << i << "j=" << j << endl;
	/*int* p;
	p = new int(99);
	cout << *p;
	delete p;*/
	/*int* p;
	char* q;
	struct test { int x, y; } *r;
	p = new int(5);
	q = new char[10]; strcpy(q,"abcefe");
	r = new struct test;
	r->x = 2;
	r->y = 5;
	cout << *p << endl;
	cout << q << endl;
	cout << r->x << r->y << endl;
	delete p; delete []q; delete r;*/
	/*int a = 10;
	int* p;
	p = &a;*/

	//在32位操作系统下，指针都是占4个字节空间大小，不管是什么数据类型
	//cout << "sizeof int*P = " << sizeof(p)<< endl;
	//cout << "sizeof char = " << sizeof(char *) << endl;
	//cout << "sizeof float = " << sizeof(float *) << endl;
	//cout << "sizeof double = " << sizeof(double *) << endl;
	/*int* p;
	p = NULL;
	cout << *p << endl; */
	//报错不能访问0--255编号的地址；因为0--255编号的地址是系统占用内存
	//野指针
	int* p;
	p = (int *)0x11000;
	//报错，访问权限冲突
	/*cout << *p << endl;*/
	getchar();
	return 0;
}