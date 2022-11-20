#include <iostream>
using namespace std;

//�Զ������µ�taperԲ׶���ಢ�������ʹ�ã��������˽�����ݳ�Աr��h,�ֱ��ʾԲ׶��ĵ���뾶�͸ߣ�
//���ṩ���캯���Լ�������������ȫ���������ĸ����г�Ա����
//�����������������taper�����ʹ�ã�˵��taper�����,�����Բ�뾶��Բ׶��ĸ�
//������������Բ׶��Ĳ������ȫ����Լ���������������ʾ����

const double PI = 3.14;

//����һ��teperԲ׶����
class Taper {
private:
	int m_R;  //����뾶
	int m_H;  //Բ׶��߶�
public:
	//�Զ��幹�캯�� ����Ĭ��ֵ
	Taper() {
		m_R = 2;
		m_H = 3;
	}
	//����Բ׶��ĵ�����뾶�͸�
	void setValue(int r,int h) {
		m_R = r;
		m_H = h;
	}
	//����ĸ�߳���
	int taperL() {
		return sqrt(m_R * m_R + m_H * m_H);
	}
	//����Բ׶����
	double calculate_Sc() {
		return PI * m_R * taperL();
	}
	//����Բ׶��ȫ���(������Ӳ����)
	double calculate_S() {
		return (PI * m_R * m_R) + calculate_Sc();
	}
	//����Բ׶������
	double calculateV() {
		return (PI * m_R * m_R * m_H) / 3;
	}
};

int main05() {

	//ʵ����һ��Բ׶�����
	Taper ta1;
	ta1.setValue(2,5);
	cout << "Բ׶��Ĳ����Ϊ�� " << ta1.calculate_Sc() << endl;
	cout << "Բ׶���ȫ���Ϊ�� " << ta1.calculate_S() << endl;
	cout << "Բ׶������Ϊ�� " << ta1.calculateV() << endl;

	getchar();
	return 0;
}