#include <iostream>
using namespace std;

int* func() {
	//����new�ؼ���  ���Խ����ݿ��ٵ�����

	int *p = new int(10);
	return p;
}

int main03() {

	//�ڶ�����������
	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ�����
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	getchar();
	return 0;
}