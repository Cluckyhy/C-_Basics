//#include <iostream>
//using namespace std;
//
////用函数交换变量a和b，要求分别用传值，传指针和传引用实现
//
////传值的方式实现
//void swap1(int num1,int num2) {
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//}
////传指针的方式实现
//void swap2(int *num1,int *num2) {
//	int temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//}
////传引用的方式实现
//void swap3(int& num1, int& num2) {
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//}
// 
//
//int main() {
//
//	int a = 10, b = 20;
//	swap1(a, b);
//	cout << "a = " << a << " b = " << b << endl;
//	swap2(&a, &b);
//	cout << "a = " << a << " b = " << b << endl;
//	swap3(a, b);
//	cout << "a = " << a << " b = " << b << endl;
//
//	getchar();
//	return 0;
//}