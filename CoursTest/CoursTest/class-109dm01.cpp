//#include <iostream>
//using namespace std;
//
//class Array {
//public:
//	int array[5] = {45,2,78,6,99};
//	int len;
//	int array_max(int *arr,int len) {
//		for (int i = 0; i < len;i++) {
//			if (arr[0]<arr[i]) {
//				int temp = arr[0];
//				arr[0] = arr[i];
//				arr[i] = temp;
//			}
//		}
//		return arr[0];
//	}
//};
//
//int maindm01() {
//	Array arr1;
//	arr1.len = sizeof(arr1.array) / sizeof(arr1.array[0]);
//	int max = arr1.array_max(arr1.array,arr1.len);
//	cout << "数组的最大值为：" << max << endl;
//	getchar();
//	return 0;
//}