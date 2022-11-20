#include <iostream>
using namespace std;

int main05() {
	int a[10], * p1;
	p1 = &a[0];
	for (int i = 0; i < 10; i++) {
		cin >> *(p1 + i);
	}
	cout << "输出的数组" << endl;
	/*for (int j = 0; j < 10;j++) {
		cout << a[j] << endl;
	}*/
	for (p1 = a; p1 < (a + 10); p1++) {
		cout << *p1 << endl;
	}
	getchar();
	return 0;
}