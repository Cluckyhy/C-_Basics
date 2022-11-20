//#include <iostream>
//using namespace std;
//
//// 用函数求三个整型数据的最大值，要求验证默认参数，验证调用时无参，一个参数，两个参数和三个参数的情况
//
////求三个整数的最大值函数，有默认参数
//int MaxNum(int num1 = 1,int num2 = 2,int num3 = 3) {
//	int Max = num1;
//	if (num1 < num2) {
//		Max = num2;
//	}
//	if (Max < num3) {
//		Max = num3;
//	}
//	return Max;
//}
//
//
//
//int main() {
//
//	//调用时用无参函数
//	cout <<"三个整数的最大值为："<< MaxNum() << endl;
//
//	//调用时传入一个参数
//	cout << "三个整数的最大值为：" << MaxNum(45) << endl;
//
//	//调用时传入两个参数
//	cout << "三个整数的最大值为：" << MaxNum(56, 22) << endl;
//
//	//调用时传入三个参数
//	cout << "三个整数的最大值为：" << MaxNum(4, 78, 9) << endl;
//
//
//	getchar();
//	return 0;
//}