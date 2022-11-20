#include <iostream>
using namespace std;

//求整型数组各数之和，请用函数实现
int sum_array(int* array, int n);
int main01() {
	int array_num[] = { 1,2,3,4 };
	int result = sum_array(array_num, 4);
	cout << "整型数组各数之和为：" << result << endl;
	getchar();
	return 0;
}
int sum_array(int* array, int n) {
	int i, sum = 0;
	for (i = 0; i < n; i++) {
		sum += array[i];
	}
	return sum;
}