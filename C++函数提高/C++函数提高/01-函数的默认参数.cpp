#include <iostream>
using namespace std;

//����Ĭ�ϲ���
//��������Լ��������ݣ������Լ������ݣ����û�У���ô��Ĭ��ֵ
//�﷨������ֵ���� ���������β�=Ĭ��ֵ	��{}

int func(int num1,int num2=30,int num3=30) {
	return num1 + num2 + num3;
}


//ע������
//1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴������Ҷ�������Ĭ��ֵ
//int func2(int a, int b = 2, int c) {
//	return a + b + c;
//}
//2���������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ�����
//	 ������ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a, int b);
int func2(int a=50, int b=10) {
	return a + b;
}

int main01() {

	//cout <<"���������Ϊ�� "<< func(10, 20) << endl;
	cout << func2(10, 20) << endl;
	getchar();
	return 0;
}