#include <iostream>
using namespace std;
//封装一个函数，利用冒泡排序，实现对整型数组的升序排序；
//冒泡排序函数, 参数一 数组的首地址  参数二 数组长度
void bubbleSort(int *arr,int len);
//打印数组
void printArray(int *arr,int len);
int main() {
	//1、先创建一个数组
	int array[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//数组长度
	int len = sizeof(array) / sizeof(array[0]);
	//2、创建一个函数，实现冒泡排序；
	bubbleSort(array,len);
	//3、打印排序后的数组
	printArray(array,len);
	getchar();
	return 0;
}

void bubbleSort(int *arr, int len) {
	for (int i = 0; i < len - 1;i++) {
		for (int j = 0; j < len-i-1;j++) {
			//如果j>j+1的值，交换数字
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