#include <iostream>
using namespace std;

//ֵ����
//���庯����ʵ���������ֽ��н�������

//���һ����������Ҫ����ֵ��ʱ��������ʱ�����дvoid
void swap03(int num1,int num2) {
	cout << "����ǰ�����ݣ�" << endl;
	cout << "num1 = " << num1<<endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "����������ݣ�" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	//return; ����ֵ����Ҫ��ʱ�򣬿��Բ�дreturn;
}

int main03() {
	int a = 10;
	int b = 20;
	//��������ֵ���ݵ�ʱ�򣬺������βη����ı䣬������Ӱ��ʵ��
	swap03(a, b);
	cout << "a = "<< a  << endl;
	cout << "b ="<< b << endl;

	getchar();
	return 0;
}