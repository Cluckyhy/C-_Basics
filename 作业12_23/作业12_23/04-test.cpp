//#include <iostream>
//using namespace std;
//
////动态申请10个int型数组，赋值并输出
//
//
//int main() {
//
//	int* ptr = new int[10];
//	int* temp = ptr;
//	cout << "请输入10个整数" << endl;
//	for (; ptr < (temp + 10); ptr++) {
//		cin >> *ptr;
//	}
//	/*for (int i = 0; i < 10; i++) {
//		cin >> *(ptr + i);
//	}*/
//	ptr = temp;
//	for (int i = 0; i < 10; i++) {
//		cout << *(ptr + i)<<" ";
//	}
//	delete[] ptr;
//
//	getchar();
//	return 0;
//}