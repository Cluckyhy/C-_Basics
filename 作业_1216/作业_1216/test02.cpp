//#include <iostream>
//#include <fstream>
//using namespace std;
//
//
////创建文件输入输出流对象
//fstream fout, fin;
//
////写入f1文件函数
//void outputf1() {
//	//打开文件
//	fout.open("f1.txt", ios::out);
//	//判断文件是否打开成功
//	if (!fout.is_open()) {
//		cout << "文件不存在" << endl;
//		return;
//	}
//	//写入数据
//	for (int i = 1; i <= 15; i++) {
//		fout << i * i << " ";
//	}
//	//关闭文件
//	fout.close();
//}
//
////写入f2文件函数
//void outputf2() {
//	//打开文件
//	fout.open("f2.txt", ios::out);
//	//判断文件是否打开成功
//	if (!fout.is_open()) {
//		cout << "文件不存在" << endl;
//		return;
//	}
//	//写入数据
//	for (int i = 1; i <= 10; i++) {
//		fout << 10 * i<< " ";
//	}
//	fout << 357.9 << endl;
//
//	//千万别忘记关闭文件，在这里。
//	//否则在下一次就创建不了文件，必须先关闭文件后才可以
//	fout.close();
//}
//
////读出文件f1函数
//void inputf1andf2(int array[]) {
//	//打开文件f1
//	fin.open("f1.txt",ios::in);
//	//判断文件是否存在
//	if (!fin.is_open()) {
//		cout << "文件不存在" << endl;
//		return;
//	}
//	//读出文件f1的信息
//	for (int i = 0; i < 15; i++) {
//		fin >> array[i];
//	}
//	fin.close();
//	//打开文件f2
//	fin.open("f2.txt", ios::in);
//	if (!fin.is_open()) {
//		cout << "文件不存在" << endl;
//	}
//	//读出文件f2的信息
//	for (int i = 15; i < 25; i++) {
//		fin >> array[i];
//	}
//	//关闭文件
//	fin.close();
//}
//
//
////数组排序函数
//void sortArr(int arr[],int len) {
//	//冒泡排序
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = 0; j < len - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
////写入f3文件函数
//void outputf3(int arr[]) {
//	//打开文件f3
//	fout.open("f3.txt", ios::out);
//	//判断文件是否存在
//	if (!fout.is_open()) {
//		cout << "文件不存在" << endl;
//		return;
//	}
//	//写入文件f3的信息
//	for (int i = 0; i < 25; i++) {
//		fout << arr[i];
//	}
//	fout.close();
//}
//
////读出f3文件
//void inputf3(int arr[]) {
//	//打开文件f3
//	fin.open("f3.txt", ios::in);
//	//判断文件是否存在
//	if (!fin.is_open()) {
//		cout << "文件不存在" << endl;
//		return;
//	}
//	//读出文件f3的信息
//	for (int i = 0; i < 25; i++) {
//		fin >> arr[i];
//	}
//	//关闭文件
//	fin.close();
//}
//
//
//
//int main() {
//
//	//声明一个存放数据的数组
//	int data1[25];
//	int data2[25];
//	
//	//写入数据
//	outputf1();
//	outputf2();
//
//	//读出文件
//	inputf1andf2(data1);
//
//	//数组排序
//	sortArr(data1,25);
//
//	outputf3(data1);
//	inputf3(data2);
//
//	for (int i = 0; i < 25; i++) {
//		cout << data2[i] << endl;
//	}
//
//	getchar();
//	return 0;
//}