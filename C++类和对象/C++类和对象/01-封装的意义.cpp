#include <iostream>
using namespace std;

const double PI = 3.14;
//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ��2*PI*�뾶(R)

//class �������һ���࣬���������ŵľ���������
class Circle {
	//����Ȩ��
	//����Ȩ��
public:
	
	//����
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC() {
		return 2 * PI * m_r;
	}

};


int main01() {

	//ͨ��Բ��  ����һ�������Բ(����)
	//ʵ����   ��ͨ��һ����������һ������Ĺ��̣�
	Circle c1;
	//��Բ��������Խ��и�ֵ
	c1.m_r = 2;
	//2*PI*R;
	double result = c1.calculateZC();
	cout << "Բ���ܳ�Ϊ��" << result << endl;

	getchar();
	return 0;
}