#include <iostream>
using namespace std;

int main02() {
	//ָ����ռ�ڴ�ռ�
	int a = 10;
	/*int* p;
	p = &a;*/
	int* p = &a;
	//��32λ����ϵͳ�£�ָ�붼��ռ4���ֽڿռ��С��������ʲô��������
	//��64λ����ϵͳ�£�ָ�붼��ռ8���ֽڿռ��С��������ʲô��������
	cout << "sizeof int*P = " << sizeof(p)<< endl;
	cout << "sizeof char = " << sizeof(char *) << endl;
	cout << "sizeof float = " << sizeof(float *) << endl;
	cout << "sizeof double = " << sizeof(double *) << endl;


	getchar();
	return 0;
}