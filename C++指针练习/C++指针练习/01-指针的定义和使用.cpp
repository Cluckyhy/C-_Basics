#include <iostream>
using namespace std;

int main01() {
	//1������ָ��
	int a = 10;
	//ָ�붨����﷨���������� * ָ�������;
	int* p;
	//��ָ���¼����a�ĵ�ַ
	p = &a;
	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "ָ��Ϊ��" << p << endl;
	//2��ʹ��ָ��
	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ�������
	//ָ��ǰ��*��������ã��ҵ�ָ��ָ����ڴ��е�����;
	*p = 1000;
	cout << "aΪ��" << a << endl;
	cout << "*pΪ:" << *p << endl;
	getchar();
	return 0;
}