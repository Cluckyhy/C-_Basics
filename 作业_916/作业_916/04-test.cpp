#include <iostream>
using namespace std;
void swap(int* p1, int* p2);

int main04() {
	int a, b, c, * point_1, * point_2, * point_3;
	cin >> a >> b >> c;
	point_1 = &a;
	point_2 = &b;
	point_3 = &c;
	if (a < b) {
		swap(point_1, point_2);
	}
	if (a < c) {
		swap(point_1, point_3);
	}
	if (b < c) {
		swap(point_2, point_3);
	}
	cout << "max=" << a << "middle=" << b << "min=" << c << endl;
	getchar();
	return 0;
}
void swap(int* p1, int* p2) {
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}