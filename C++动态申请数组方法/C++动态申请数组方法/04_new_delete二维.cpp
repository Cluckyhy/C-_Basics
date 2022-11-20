//#include <iostream>
//using namespace std;
//
////动态申请开辟二维数组空间
//
//void dynamicTwoArray() {
//	int row, col;
//	cout << "请输入二维数组的行数：" << endl;
//	cin >> row;
//
//	//开辟数组行
//	int** ptr = new int* [row];
//
//	//开辟数组列
//	cout << "请输入二维数组的列数：" << endl;
//	cin >> col;
//	for (int i = 0; i < row; i++) {
//		/**(ptr + i) = new int[col];*/
//		ptr[i] = new int[col];
//	}
//
//	//输入数据
//	cout << "请输入你要输入的数据：" << endl;
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			cin >> ptr[i][j];
//		}
//	}
//
//	//输出数据
//	cout << "输出的数据为：" << endl;
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			cout << ptr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	//释放开辟的空间
//	for (int i = 0; i < row; i++) {
//		/*delete[] (*(ptr + i));*/
//		delete[] ptr[i];
//	}
//	delete[] ptr;
//}
//
//
//int main() {
//
//	dynamicTwoArray();
//
//	getchar();
//	return 0;
//}