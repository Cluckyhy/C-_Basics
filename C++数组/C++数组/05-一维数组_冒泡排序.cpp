//#include <iostream>
//using namespace std;
//
//
//int main() {
//
//	//冒泡排序算法
//	//定义一个乱序数组
//	int arr[9] = { 12,2,56,3,7,22,11,35,4 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	//数组未排序前
//	for (int i = 0; i < 9; i++) {
//		cout << arr[i]<<" ";
//	}
//	cout << endl;
//	//实现冒泡排序算法
//	//总共排序轮数为 元素个数-1；
//	for (int j = 0; j < length-1; j++) {
//		//内层循环对比  次数 = 元素个数 - 当前轮数 - 1；
//		for (int i = 0; i < length-j-1; i++) {
//			//如果第一个数比第二个数大，交换两个数字
//			if (arr[i] > arr[i + 1]) {
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//	//完成冒泡排序后
//	for (int i = 0; i < 9; i++) {
//		cout << arr[i]<<" ";
//	}
//
//
//	getchar();
//	return 0;
//}