#include <iostream>
using namespace std;

int main04() {
	//1��const����ָ��  ����ָ��
	int a = 10;
	int b = 10;
	//ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ըģ�
	const int* p = &a;
	//*p = 20; ����
	p = &b;  //��ȷ��



	//2��const���γ���  ָ�볣��
	//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ըģ�
	int* const p2 = &a;
	*p2 = 20; //��ȷ��
	//p2 = &b;  ����



	//3��const����ָ��ͳ���
	//ָ���ָ�򣬺�ָ��ָ���ֵ�������Ըģ�
	const int* const p3 = &a;
	//*p3 = 20;  ����
	//p3 = &b;  ����
	getchar();
	return 0;
}