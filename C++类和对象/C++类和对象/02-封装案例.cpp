#include <iostream>
using namespace std;

//���һ��ѧ���࣬������������ѧ��
//���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

//����һ��ѧ����
class Student {
public:   //����Ȩ��
	
	//���е����Ժ���Ϊ������ͳ��Ϊ ��Ա
	//����   ��Ա����  ��Ա����
	//��Ϊ   ��Ա����  ��Ա����


	//����
	string m_name;  //����
	int m_no;       //ѧ��

	//��Ϊ
	//��ѧ��������ѧ�Ÿ�ֵ����
	void setValue(string name,int no){
		m_name = name;
		m_no = no;
	}
	//չʾѧ��������ѧ�ź���
	void display() {
		cout << "ѧ������Ϊ�� " << m_name << endl;
		cout << "ѧ����ѧ��Ϊ�� " << m_no << endl;
	}
};

int main02() {

	//����һ�������ѧ����ʵ����һ������
	Student s1;
	//��s1����������Ը�ֵ����
	s1.setValue("�»���",5210763);
	//��ʾѧ����Ϣ
	s1.display();

	Student s2;
	s2.setValue("����",5210766);
	s2.display();
	getchar();
	return 0;
}