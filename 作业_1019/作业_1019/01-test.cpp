#include <iostream>
using namespace std;

//ʵ��ѧ���࣬������Ա������������ѧ�ţ���ѧ�ɼ���Ӣ��ɼ������ĳɼ���
//�ó�Ա����Set_dataΪ�丳ֵ����Average��������ÿλͬѧ�ĳɼ�ƽ��ֵ��
//��display������ʾÿλͬѧ�ĳɼ���ƽ��ֵ��

class Student {
private:
	string m_Name;    //����
	int m_Sno;		  //ѧ��
	int m_MathScore;  //��ѧ�ɼ�
	int m_EngScore;   //Ӣ��ɼ�
	int m_ChinaScore; //���ĳɼ�
public:
	//��ѧ�������Ը�ֵ
	void Set_data(string name,int sno,int mathscore,int engscore,int chinascore) {
		m_Name = name;
		m_Sno = sno;
		m_MathScore = mathscore;
		m_EngScore = engscore;
		m_ChinaScore = chinascore;
	}
	//����ÿλѧ���ĳɼ�ƽ��ֵ
	double Average() {
		return (m_MathScore + m_EngScore + m_ChinaScore) / 3;
	}
	//��ʾÿλͬѧ�ĳɼ���ƽ��ֵ
	void display() {
		cout << "��ѧ������ѧ�ɼ�Ϊ�� " << m_MathScore << endl;
		cout << "��ѧ����Ӣ��ɼ�Ϊ�� " << m_EngScore << endl;
		cout << "��ѧ�������ĳɼ�Ϊ�� " << m_ChinaScore << endl;
		cout << "��ѧ���ĳɼ�ƽ��ֵΪ�� " << Average() << endl;
	}

};

int main01() {

	//����һ��ѧ��
	Student s1;
	s1.Set_data("����",202101,85,90,88);
	s1.display();

	getchar();
	return 0;
}