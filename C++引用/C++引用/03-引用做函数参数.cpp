#include <iostream>
using namespace std;

//��������

//1��ֵ����
void mySwap01(int a,int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "mySwap01-a = " << a << endl;
	cout << "mySwap01-b = " << b << endl;
}

//2����ַ����
void mySwap02(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
//3�����ô���
void mySwap03(int& num1, int& num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main03() {
	int a = 10;
	int b = 20;
	//mySwap01(a, b);   //ֵ���ݣ��ββ�������ʵ��
	//mySwap02(&a, &b);   //��ַ���ݣ��βλ�����ʵ��
	mySwap03(a, b);    //���ô��ݣ��β�Ҳ�ǻ�����ʵ�ε�
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	getchar();
	return 0;
}