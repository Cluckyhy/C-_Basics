#include <iostream>
using namespace std;

//�������ص�ע������
//1��������Ϊ���ص�����
void func04(int &a) {   // int &a = 10; ���Ϸ���
	cout << "func04(int &a)����" << endl;
}

void func04(const int &a) {   //const int &a = 10; �Ϸ����﷨
	cout << "func04(const int &a)����" << endl;
}
//2��������������Ĭ�ϲ��� 
//����д�������ص�ʱ��Ͳ�ҪдĬ�ϲ�����
void func_04(int a,int b=10) {
	cout << "func_04(int a,int b)�ĵ���" << endl;
}
void func_04(int a) {
	cout << "func_04(int a)�ĵ���" << endl;
}

int main() {

	/*int a = 10;
	func04(a);*/
	//func04(10);
	//func_04(2);   //����������������Ĭ�ϲ����������˶����ԣ��������������������
	func_04(10, 20);

	getchar();
	return 0;
}