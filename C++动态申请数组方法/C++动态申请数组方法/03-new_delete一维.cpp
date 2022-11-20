//#include <iostream>
//using namespace std;
//
////动态申请开辟一维数组空间
//
//void dynamicOneArray() {
//	int len;
//	cout << "请输入要开辟的空间大小" << endl;
//	cin >> len;
//	cout << "请输入你要输入的值" << endl;
//	int* ptr = new int[len];
//	//输入数据方法一
//	//int* temp = ptr;
//	//for (; ptr < (temp + len); ptr++) {
//	//	cin >> *ptr;
//	//}
//	//输入数据方法二
//	for (int i = 0; i < len; i++) {
//		cin >> ptr[i];
//	}
//	
//	//输出数据方法一
//	//cout << "输出的数据为：" << endl;
//	//for (ptr = temp; ptr < (temp + len); ptr++) {
//	//	cout << *ptr <<" ";
//	//}
//	//输出数据方法二
//	cout << "输出的数据为：" << endl;
//	for (int i = 0; i < len; i++) {
//		cout << ptr[i] << " ";
//	}
//
//	//释放空间大小
//	delete[] ptr;
//}
//
//
//int main() {
//
//	dynamicOneArray();
//
//	getchar();
//	return 0;
//}