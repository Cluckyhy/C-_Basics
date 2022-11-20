#include <iostream>
using namespace std;

int main01() {
	int a, b, * p1, * p2;
	cin >> a >> b;
	p1 = &a;
	p2 = &b;
	cout << "a=" << a << "b=" << b << endl;
	cout << "a的地址是" << p1 << "b的地址是" << p2 << endl;
	cout << "a的地址是" << &a << "b的地址是" << &b << endl;
	getchar();
	return 0;
}