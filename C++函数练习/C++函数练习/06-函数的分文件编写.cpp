#include <iostream>
using namespace std;
#include "swap.h"

//�����ķ��ļ���д
//ʵ���������ֽ��н����ĺ���
//����������
//void swap(int a ,int b);
//�����Ķ���
//void swap(int a,int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

//1������һ��.h��ͷ�ļ�

//2������һ��.cpp��Դ�ļ�
//3����ͷ�ļ���д����������
//4����Դ�ļ���д�����Ķ���

int main() {
	int a = 10;
	int b = 20;
	swap(a,b);
	getchar();
	return 0;
}