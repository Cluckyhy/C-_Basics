#include <iostream>
using namespace std;

int main01() {

	//Ӧ�õĻ����﷨
	//��������  &���� = ԭ��
	int a = 10;
	//��������
	int& b = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	getchar();
	return 0;
}