#include <iostream>
using namespace std;

int num_max(int a = 5, int b = 6, int c = 8);

int main05() {
	//int max = num_max(); //验证的默认参数最大数为： 8；
	//int max = num_max(11); //验证的是传入一个参数时，最大数为：11
	int max = num_max(23, 89, 555); //验证的是传入三个参数时，最大数为：555;
	cout << "三个数的最大数为：" << max << endl;
	getchar();
	return 0;
}
int num_max(int a, int b, int c) {
	if (a < b) {
		a = b;
	}
	if (a < c) {
		a = c;
	}
	return a;
}