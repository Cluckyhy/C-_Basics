#include <iostream>
using namespace std;

//1��������
class Person {
public:

	int m_A;
	mutable int m_B;    //�����������ʹ�ڳ������У�Ҳ�����޸����ֵ,�ӹؼ���mutable

	//thisָ��ı���  ��ָ�볣��  ָ���ָ���ǲ������޸ĵ�
	//const Person *const this 
	//�ڳ�Ա���������const,���ε���thisָ�룬��ָ��ָ���ֵҲ�������޸�
	void showPerson() const{
		//this->m_A = 100;
		this->m_B = 100;
		//this = NULL;  thisָ�벻�����޸�ָ���ָ�� 
	}
	void func() {
		m_A = 100;
	}
};

void test01() {
	Person p1;
	p1.showPerson();
}

//2��������

void test02() {
	const Person p; //�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;
	p.m_B = 100;  //m_B������ֵ���ڳ�������Ҳ�����޸�
	
	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();  ������Ϊfunc()���ǳ�����,��Ϊ��ͨ��Ա���������޸�����
}


int main() {

	test01();

	getchar();
	return 0;
}