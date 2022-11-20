#include <iostream>
#include <iomanip>
using namespace std;
//函数重载
//int square(int number) {
//	return number * number;
//}
//double square(double number) {
//	return number * number;
//}
//void displayStar(int = 10,int = 1);
//setw设置宽度
//setprecision设置有效位数
int main() {
	/*char word[10];*/
	//方法一
	/*cin >> setw(10) >> word;*/
	/*int number;
	char ch;
	cout << "请输入一个整数" << endl;
	cin >> number;*/
	//忽略3个字符
	/*cin.ignore(3);
	cout << "请输入一个字符" << endl;
	cin.get(ch);
	float quotient, number1 = 132.364f, number2 = 26.91f;
	quotient = number1 / number2;
	int intValue = 3928;
	float floatValue = 91.5;
	char cStringValue[] = "Confucius & Mo-tse";*/

	//cout << word << endl;
	/*cout << number << endl;
	cout << ch << endl;
	cout << quotient << endl;
	cout << setprecision(5) << quotient << endl;
	cout << setprecision(4) << quotient << endl;
	cout << setprecision(3) << quotient << endl;
	cout << "(" << setw(5)<<intValue << ")" << endl;
	cout << "(" << setw(8) << floatValue << ")" << endl;
	cout << "(" << setw(20) << cStringValue << ")" << endl;*/
	/*displayStar();
	cout << endl;
	displayStar(8,2);
	cout << endl;
	displayStar(5,12);*/

	getchar();
	return 0;
}
//void displayStar(int cols,int rows) {
//	for (int down = 0; down < rows;down++) {
//		for (int across = 0; across < cols;across++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//
//}