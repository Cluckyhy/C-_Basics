#include <iostream>
using namespace std;

int main02() {

	int a = 10;
	//int& b = a;
	//1�����ñ����ʼ��
	//int& b;  //���󣬱���Ҫ��ʼ��
	int& b = a;
	//2������һ����ʼ����Ͳ����Ը�����
	int c = 20;
	b = c;  //��ֵ�����������Ǹ�������
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	//int& b = c;  //�������涨����bΪa�����ã��Ͳ����Ը�����
	//cout << b << endl;

	getchar();
	return 0;
}