#include <iostream>
using namespace std;

void func05(int &ref) {
	ref = 100;  //ref�����ã�ת��Ϊ*ref = 100;
}

int main05() {

	int a = 10;
	//�������Զ�ת��Ϊ int* const ref = &a;ָ�볣����ָ��ָ�򲻿��Ըģ�Ҳ˵��Ϊʲô���ò����Ը���
	int& ref = a;
	ref = 20;	//�ڲ�����ref�����ã��Զ�������ת��Ϊ: *ref = 20;

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	func05(a);
	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	getchar();
	return 0;
}