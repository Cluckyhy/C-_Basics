#include <iostream>
using namespace std;

//ռλ����
//�﷨������ֵ���� ���������������ͣ�{}

//Ŀǰ�׶ε�ռλ���������ǻ��ò��ϣ�����γ����ǻ��õ���
//ռλ���� ��������Ĭ�ϲ���
void func02(int a,int = 10) {
	cout << "this is func02" << endl;
}

int main02() {

	func02(10);  //���ռλ����ûдĬ�ϲ�����������д

	getchar();
	return 0;
}