#include <iostream>
using namespace std;
//����һ��ֱ�Ӵ�ֵ
//void swap(int a, int b);
//����������ָ��
//void swap(int *p1,int *p2);
//��������������
void swap(int& a, int& b);

int main06() {
	int num1 = 5, num2 = 8;
	//����һ��ֱ�Ӵ�ֵ
	//swap(num1,num2); 
	//������������ָ��
	//swap(&num1,&num2);
	//��������������
	swap(num1, num2);
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	getchar();
	return 0;
}
//�ô�ֵ�ķ�ʽ  �����ɽ�����������ֵ��num1=5,num2=8;
//void swap(int a,int b) { 
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}

//�ô�ָ��ķ�ʽ  ���ɽ�����������ֵ��num1=8,num2=5;
//void swap(int *p1,int *p2) {
//	int temp;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}

//�ô����õķ�ʽ  ����
void swap(int& a, int& b) {
	/*int& num1 = a;
	int& num2 = b;*/
	int temp;
	temp = a;
	a = b;
	b = temp;
}