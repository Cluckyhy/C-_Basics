#include <iostream>
using namespace std;

//�������������֮�ͣ����ú���ʵ��
int sum_array(int* array, int n);
int main01() {
	int array_num[] = { 1,2,3,4 };
	int result = sum_array(array_num, 4);
	cout << "�����������֮��Ϊ��" << result << endl;
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