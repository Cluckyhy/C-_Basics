#include <iostream>
using namespace std;


int main() {

	//1������
	int a = 0;
	cout << "������ͱ���a��ֵ��" << endl;
	cin >> a;
	cout <<"���ͱ���a ="<< a << endl;

	//2��������
	float f1 = 3.14f;
	cout << "��������ͱ���f1��ֵ��" << endl;
	cin >> f1;
	cout << "�����ͱ���f1 = " << f1 << endl;

	//3���ַ���
	char ch1 = 's';
	cout << "����ַ��ͱ���ch��ֵ" << endl;
	cin >> ch1;
	cout << "�ַ��ͱ���ch1 = "<< ch1 << endl;

	//4���ַ�����
	string str = "Hello World";
	cout << "����ַ����ͱ���str��ֵ��" << endl;
	cin >> str;
	cout << "�ַ����ͱ���str = " << str << endl;

	//5��������
	bool b1 = true;
	cout << "��������ͱ���b1��ֵ��" << endl;
	cin >> b1;  //bool����  ֻҪ�Ƿ�0��ֵ������Ϊ��
	cout << "�����ͱ���b1 = " << b1 << endl;

	getchar();
	return 0;
}