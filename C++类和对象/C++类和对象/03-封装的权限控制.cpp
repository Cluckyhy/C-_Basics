#include <iostream>
using namespace std;

//����Ȩ��
//����
//1������Ȩ��
//public:      ��Ա���ڿ��Է���  ����Ҳ���Է���
//2������Ȩ��
//protected:   ��Ա���ڿ��Է���  ���ⲻ���Է���  ������Է��ʸ����еı�������
//3��˽��Ȩ��
//private:     ��Ա���ڿ��Է���  ֻ���Լ����ڿ��Է���

class Person {
	//����Ȩ��
public:
	string m_Name;   //����

protected:
	string m_Car;    //����
	
private:
	int m_Password;  //���п�����
	
public:
	void func03() {
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
};



int main03() {

	//ʵ�����������
	Person p1;
	p1.m_Name = "����";
	//p1.m_Car = "����";  ����Ȩ�޵����� �����ⲻ�ɷ���
	//p1.m_Password = 123; ˽��Ȩ�޵����ݣ����ⲻ�ɷ���

	getchar();
	return 0;
}