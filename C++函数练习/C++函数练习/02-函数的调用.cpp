#include <iostream>
using namespace std;

//�����Ķ���
//�﷨��
// ����ֵ����  ������ �������б�{ ���������  return ���ʽ }

//�ӷ�������ʵ������������ӣ����ҽ���ӵĽ�����з���
//���������ʱ��num1��num2��û����ʵ���ݣ���ֻ����ʽ�ϵ�һ������������β�
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}


int main02() {
	//main������ȥ����add����
	int a = 10;
	int b = 20;
	//�������õ��﷨���������ƣ�������
	//a��b ��Ϊʵ�ʲ��������ʵ��
	//����������ʱʵ�ε�ֵ�ᴫ�ݸ��β�
	int result = add(a,b);
	cout << "��������ӵĺ�Ϊ�� " << result << endl;

	getchar();
	return 0;
}