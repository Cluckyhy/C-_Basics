//#include <iostream>
//#include <fstream>
//using namespace std;
//
//
////问题：为什么我要写两次写入文件f3函数，才能创建f3文件，写一次就创建不了
////问题解决：真想给自己两巴掌
////找了这么久的bug，由于自己的粗心大意。在写入f2文件后，忘记关闭文件了。导致后面在创建文件时，只写outputf3函数是不行的
////然后发现，再写一个outputf4函数又可以。因为我在outputf3里面写了fout.close()关闭文件，所以才能通过调用outputf4函数创建出
////f3文件，所以说，打开一个文件是不需要提醒的，大家都会。但是忘记关闭一个文件却是大家最容易犯的错误。然而关闭一个打开的文件
////是十分重要的一步操作，大家一定要切记，在文件输入输出流操作时，一定不要忘记关闭文件！！！
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
//		fout << i * i + 0.5 << " ";
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
//		fout << 10 * i + 0.5 << " ";
//	}
//	fout << 357.9 << endl;
//	//关闭文件		--此处忘记关闭文件了
//	fout.close();
//}
//
////读出文件f1函数
//void inputf1andf2(double array[]) {
//	//打开文件f1
//	fin.open("f1.txt", ios::in);
//	//判断文件是否存在
//	if (!fin.is_open()) {
//		cout << "文件不存在" << endl;
//		return;
//	}
//	//读出文件f1的信息
//	for (int i = 0; i < 15; i++) {
//		fin >> array[i];
//	}
//	//关闭文件
//	fin.close();
//
//
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
//void sortArr(double arr[], int len) {
//	//冒泡排序
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = 0; j < len - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				double temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//
////有问题
//
//void outputf3(double arr[]) {
//	//打开文件f3
//	fout.open("f3.txt", ios::out);
//	//判断文件是否存在
//	if (!fout.is_open()) {
//		cout << "文件不存在" << endl;
//		return;
//	}
//	//cout << "第三个" << endl;
//	//写入文件f3的信息
//	for (int i = 0; i < 25; i++) {
//		fout << arr[i] <<" ";
//	}
//	//如果上面的outputf2函数中没有写关闭文件操作的话，那么这个函数就无法创建一个f3.tex文件。
//	//原因就是在未关闭文件之前是不能再次创建文件的
//	//然后下面的函数outputf4函数又能创建文件，就是因为这里写了close，所以就有效果！！
//	fout.close();
//}
//
////void outputf4(double arr[]) {
////	//打开文件f3
////	fout.open("f3.txt", ios::out);
////	//判断文件是否存在
////	if (!fout.is_open()) {
////		cout << "文件不存在" << endl;
////		return;
////	}
////	cout << "第四个" << endl;
////	//写入文件f3的信息
////	for (int i = 0; i < 25; i++) {
////		fout << 55 << " ";
////	}
////	fout.close();
////}
//
//
//
////读出f3文件
//void inputf3(double arr[]) {
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
//
//int main() {
//
//	//声明一个存放数据的数组
//	double data1[25];
//	double data2[25];
//
//	//写入数据
//	outputf1();
//	outputf2();
//
//	//读出文件
//	inputf1andf2(data1);
//
//	//数组排序
//	sortArr(data1, 25);
//
//	outputf3(data1);
//	//outputf4(data1);
//	inputf3(data2);
//
//	for (int i = 0; i < 25; i++) {
//		cout << data2[i] << endl;
//	}
//
//
//	getchar();
//	return 0;
//}