#include <iostream>
using namespace std;

//��������������ֵ
//1����Ҫ���ؾֲ�����������
int& test01() {
	int a = 10;
	return a;
}
//2�������ĵ��ÿ�����Ϊ��ֵ
int& test02() {
	static int a = 10;   //��̬�����������ȫ������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
	return a;
}

int main04() {

	//int& ref = test01(); 
	//cout << "ref = " << ref << endl;   //��һ�ν����ȷ������Ϊ���������˱���
	//cout << "ref = " << ref << endl;   //�ڶ��ν��������Ϊa���ڴ��Ѿ��ͷ�

	int &ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;   //��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
	//cout << test02() << endl;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;


	getchar();
	return 0;
}