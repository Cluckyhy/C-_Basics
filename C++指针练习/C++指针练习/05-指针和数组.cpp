#include <iostream>
using namespace std;

int main05() {
	//ָ�������
	//����ָ����������е�Ԫ��
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << array[5] << endl;
	int* p = array;  //����������������׵�ַ��array�����׵�ַ��
	cout << "����ָ����ʵ�һ��Ԫ�أ�" << *p << endl;
	p++;  //��ָ�����ƫ��4���ֽڣ���1����ƫ��4���ֽڣ���Ϊ�������int��ָ��
	cout << "����ָ����ʵڶ���Ԫ�أ�" << *p << endl;
	cout << "����ָ���������" << endl;
	int* p2 = array;
	for (int i = 0; i < 10;i++) {
		cout << *p2 + i << endl;
	}
	getchar();
	return 0;
}