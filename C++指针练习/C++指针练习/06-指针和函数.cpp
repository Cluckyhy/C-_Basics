#include <iostream>
using namespace std;
//ʵ���������ֽ��н���
void swap01(int a,int b);
void swap02(int *p1,int *p2);


int main06() {
	//ָ��ͺ���
	//1��ֵ����  ����ı�ʵ�ε�ֵ
	int a = 10;
	int b = 20;
	swap01(a,b);
	cout << "ֵ����-a =" << a << endl;
	cout << "ֵ����-b =" << b << endl;

	//2����ַ����  ��ı�ʵ�ε�ֵ
	swap02(&a,&b);
	cout << "��ַ����-a =" << a << endl;
	cout << "��ַ����-b =" << b << endl;
	getchar();
	return 0;
}
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a =" << a << endl;
	cout << "swap01 b =" << b << endl;
}
void swap02(int *p1,int *p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}