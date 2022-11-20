#include <iostream>
using namespace std;
void sort(int* p, int n);

int  main() {
	int i, * p, array[10];
	p = array;
	cout << "Please enter ten intege number" << endl;
	for (i = 0; i < 10;i++) {
		cin >> array[i];
	}
	sort(p,10);
	cout << "10个整数的升序为：" << endl;
	for (i = 0; i < 10; i++) {
		cout << array[i]<<" ";
	}
	return 0;
}
void sort(int *p,int n) {
	int i, j, temp;
	for (i = 0; i < n;i++) {
		for (j = 1 + i; j < n;j++) {
			if (*(p+i)>*(p+j)) {
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}
}