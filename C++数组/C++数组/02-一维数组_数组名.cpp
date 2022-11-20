//#include <iostream>
//using namespace std;
//
//
//int main() {
//
//	//数组名的用途
//	//1、可以通过数组名统计整个数组占用内存大小
//	int arr[10] = { 1,2,3,4,6,5,7,8,9,56 };
//	cout << "整个数组占用的内存空间为：" << sizeof(arr) << endl;
//	cout << "统计每个元素所占用空间为：" << sizeof(arr[0]) << endl;
//	cout << "数组中元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
//	//2、可以通过数组名来查看数组的首地址
//	cout <<"数组的首地址为:"<< (int)arr << endl;
//	//数组中的第一个元素的地址就是数组的首地址
//	cout << "数组中第一个元素的地址为：" << (int)&arr[0] << endl;
//	cout << "数组中第二个元素的地址为：" << (int)&arr[1] << endl;
//
//	//数组名是一个常量，不可以进行赋值操作
//	//arr = 100;  报错
//
//	
//	getchar();
//	return 0;
//}