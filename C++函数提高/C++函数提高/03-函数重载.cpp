#include <iostream>
using namespace std;

//��������
//�����ú�������ͬ����߸�����

//�������ص���������
//1��ͬһ����������
//2����������ͬ
//3�������Ĳ��������Ͳ�ͬ  ������ͬ  ˳��ͬ��


void func03() {
	cout << "this is func03" << endl;
}
void func03(int a) {
	cout << "this is func03(int a)!!" << endl;
}
void func03(double b) {
	cout << "this is func03(double b)!!" << endl;
}
void func03(int a ,double b) {
	cout << "this is func03(int a ,double b)!!" << endl;
}
void func03(double b, int a) {
	cout << "this is func03(double b, int a)!!" << endl;
}

//ע������
//�����ķ���ֵ��������Ϊ�������ص�����
//int func03(double b, int a) {
//	cout << "this is func03(double b, int a)!!" << endl;
//	return 0;
//}


int main03() {

	func03();
	func03(2);
	func03(2.12);
	func03(3.14,10);
	func03(2,2.22);

	getchar();
	return 0;
}