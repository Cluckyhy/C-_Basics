#include <iostream>
using namespace std;

const int conint = 20;
int main03() {
	//conint = 10; //������ʾ���ʽ�����ǿ��޸ĵ���ֵ
	cout << "������Ϊ��" << conint << endl;
	int a = 10;
	int b = 30;
	const int* p = &a;
	//*p = 50;  //������ʾ���ʽ�����ǿ��޸ĵ���ֵ
	int* const p1 = &b;
	//p1 = &a;	//������ʾ���ʽ�����ǿ��޸ĵ���ֵ
	return 0;
}