#include <iostream>
using namespace std;

class C1 {
	int m_a;  //Ĭ��Ȩ��  ��˽��
};

struct C2 {
	int m_a;  //Ĭ��Ȩ��  �ǹ���
};

int main04() {

	//struct �� class����
	//struct Ĭ��Ȩ����  ���� public
	//class  Ĭ��Ȩ����  ˽�� private 

	C1 c1;
	//c1.m_a = 100;  �������Է���  classĬ����˽�� �����Է���
	C2 c2;
	c2.m_a = 100;   //��ȷ ��struct Ĭ�ϵ�Ȩ���ǹ���������ǿ��Է��ʵ�

	getchar();
	return 0;
}