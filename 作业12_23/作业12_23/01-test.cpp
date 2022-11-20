//#include <iostream>
//using namespace std;
//
////从键盘接收15个数，找到第三个能被5整除的数，找到，则输出该数后退出，否则给出用户提示信息
//
//
//int main() {
//
//	int num[15], count = 0;
//	int  i;
//	cout << "请你输入15个整数" << endl;
//	for (i = 0; i < 15; i++) {
//		cin >> num[i];
//	}
//	for (i = 0; i < 15; i++) {
//		if (num[i] % 5 == 0) {
//			count++;
//		}
//		if (count == 3) {
//			cout << "已找到第三个能被5整除的数是："<<num[i] << endl;
//			break;
//		}
//	}
//	if (i > 14) {
//		cout << "未能找到第三个能被5整除的数" << endl;
//	}
//
//	getchar();
//	return 0;
//}