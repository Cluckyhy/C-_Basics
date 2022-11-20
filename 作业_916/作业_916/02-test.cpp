#include <iostream>
using namespace std;

int main02() {
	int a, b, * p1, * p2, * p;
	cin >> a >> b;
	p1 = &a;
	p2 = &b;
	if (a < b) {
		p = p1; p1 = p2; p2 = p;
	}
	cout << "a=" << a << "b=" << b << endl;
	cout << "max=" << *p1 << "min=" << *p2 << endl;
	getchar();
	return 0;
}