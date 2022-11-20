//#include <iostream>
//using namespace std;
//
//
//int main() {
//
//	//定义一个一维数组
//	int arr[5] = { 300,350,700,400,250 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];  //先认定一个最大值为arr[0]
//	for (int i = 0; i < length; i++) {
//		//如果访问的数组中的元素比我认定的最大值还要大，则更新最大值
//		if (arr[i + 1] > max) {
//			max = arr[i + 1];
//		}
//	}
//	cout << "数组中最大的数为：" << max;
//
//	getchar();
//	return 0;
//}