#include <iostream>
using namespace std;
#include <string>

//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��

//�������
class Person05 {
private:
	//����  //�ɶ���д
	string m_Name;
	//����  //�ɶ���д
	int m_Age;
	//����  //ֻд
	string m_Lover;

public:
	//����������
	void setName(string name) {
		m_Name = name;
	}
	//��ȡ������
	string getName() {
		return m_Name;
	}
	//��ȡ���䣺  �ɶ���д ������޸ģ�����ķ�Χ������0~150֮�䣩
	int getAge() {
		//m_Age = 0;
		return m_Age;
	}
	//�������䣺
	void setAge(int age) {
		if (age < 0 || age>150) {
			m_Age = 0;
			cout << "�������������" << endl;
			return;
		}
		m_Age = age;
	}
	
	//�������ˣ�  ֻд
	void setLover(string lover) {
		m_Lover = lover;
	}
};

int main05() {

	Person05 p1;
	//p1.m_Name = "����";
	p1.setName("����");
	cout << "����Ϊ�� " << p1.getName() << endl;
	p1.setAge(1000);
	cout << "����Ϊ�� " << p1.getAge() << endl;
	//��������
	p1.setLover("huahua");
	//cout << "����" << p1.getLover() << endl;  �����ǲ����Է��ʵ�

	getchar();
	return 0;
}