#include <iostream>
using namespace std;

int  main06() {
	int a[10], i, j, min, temp;
	cout << "������10������" << endl;
	for (i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (i = 0; i < 9; i++) {
		min = i;
		for (j = 1 + i; j < 10; j++) {
			if (a[min] > a[j]) {
				min = j;
			}
		}
		if (min != i) {
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}
	cout << "��10����������Ϊ��" << endl;
	for (i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	return 0;
}


//========================== = ָ������==============================
//
//
//
//#include <iostream>
//using namespace std;
//void sort(int* p, int n);
//
//int  main() {
//	int i, * p, array[10];
//	p = array;
//	cout << "Please enter ten intege number" << endl;
//	for (i = 0; i < 10; i++) {
//		cin >> array[i];
//	}
//	sort(p, 10);
//	cout << "10������������Ϊ��" << endl;
//	for (i = 0; i < 10; i++) {
//		cout << array[i] << " ";
//	}
//	return 0;
//}
//void sort(int* p, int n) {
//	int i, j, temp;
//	for (i = 0; i < n; i++) {
//		for (j = 1 + i; j < n; j++) {
//			if (*(p + i) > *(p + j)) {
//				temp = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = temp;
//			}
//		}
//	}
//}