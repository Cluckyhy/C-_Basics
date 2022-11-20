#include <iostream>
using namespace std;

int main() {
	int* array;
	array = new int[10];
	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	cout << "Êı×éÎª£º" << endl;
	for (int j = 0; j < 10; j++) {
		cout << " " << array[j];
	}
	delete array;
	getchar();
	return 0;
}