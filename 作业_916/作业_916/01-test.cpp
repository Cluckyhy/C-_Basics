#include <iostream>
using namespace std;

int main01() {
	int a, b, * p1, * p2;
	cin >> a >> b;
	p1 = &a;
	p2 = &b;
	cout << "a=" << a << "b=" << b << endl;
	cout << "a�ĵ�ַ��" << p1 << "b�ĵ�ַ��" << p2 << endl;
	cout << "a�ĵ�ַ��" << &a << "b�ĵ�ַ��" << &b << endl;
	getchar();
	return 0;
}