#include <iostream>
using namespace std;
//��װһ������������ð������ʵ�ֶ������������������
//ð��������, ����һ ������׵�ַ  ������ ���鳤��
void bubbleSort(int *arr,int len);
//��ӡ����
void printArray(int *arr,int len);
int main() {
	//1���ȴ���һ������
	int array[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//���鳤��
	int len = sizeof(array) / sizeof(array[0]);
	//2������һ��������ʵ��ð������
	bubbleSort(array,len);
	//3����ӡ����������
	printArray(array,len);
	getchar();
	return 0;
}

void bubbleSort(int *arr, int len) {
	for (int i = 0; i < len - 1;i++) {
		for (int j = 0; j < len-i-1;j++) {
			//���j>j+1��ֵ����������
			if (arr[j]>arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}
void printArray(int *arr,int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}