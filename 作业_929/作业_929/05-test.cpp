#include <iostream>
using namespace std;

int num_max(int a = 5, int b = 6, int c = 8);

int main05() {
	//int max = num_max(); //��֤��Ĭ�ϲ��������Ϊ�� 8��
	//int max = num_max(11); //��֤���Ǵ���һ������ʱ�������Ϊ��11
	int max = num_max(23, 89, 555); //��֤���Ǵ�����������ʱ�������Ϊ��555;
	cout << "�������������Ϊ��" << max << endl;
	getchar();
	return 0;
}
int num_max(int a, int b, int c) {
	if (a < b) {
		a = b;
	}
	if (a < c) {
		a = c;
	}
	return a;
}