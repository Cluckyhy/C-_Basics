//#include <iostream>
//using namespace std;
//
////�ú�����������a��b��Ҫ��ֱ��ô�ֵ����ָ��ʹ�����ʵ��
//
////��ֵ�ķ�ʽʵ��
//void swap1(int num1,int num2) {
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//}
////��ָ��ķ�ʽʵ��
//void swap2(int *num1,int *num2) {
//	int temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//}
////�����õķ�ʽʵ��
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