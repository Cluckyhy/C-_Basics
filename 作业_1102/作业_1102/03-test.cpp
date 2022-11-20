#include <iostream>
using namespace std;

//���¿κ�ϰ���9��ı�̡�

//������Ʒ��
class Commodity {
private:
	int m_Num;				   //����Ա��
	int m_Quantity;			   //��������
	double m_Price;            //�ۻ�����
	static double m_Discount;  //�ۿ�
	static double m_Sum;       //���ۿ��
	static int m_N;		       //�����ܼ���
public:
	//���캯��
	Commodity(int num,int quantity,double price);
	//���������ܼۺ���
	void TotalP();
	//����ƽ���ۼۺ���
	static double average();
	//������
	void display();
};

Commodity::Commodity(int num, int quantity, double price) {
	m_Num = num;
	m_Quantity = quantity;
	m_Price = price;
}

//�ۿ�Ϊ�Ű���
double Commodity::m_Discount = 0.98;
//�����ۿ��
double Commodity::m_Sum = 0;
//�����ܼ���
int Commodity::m_N = 0;

void Commodity::TotalP() {
	if (m_Quantity > 10) {
		Commodity::m_Sum += m_Quantity * m_Price * m_Discount;
	}
	else {
		Commodity::m_Sum += m_Quantity * m_Price;
	}
	Commodity::m_N += m_Quantity;
}
double Commodity::average() {
	return m_Sum / m_N;
}
void Commodity::display() {
	cout << "���մ���Ʒ�������ۿ�Ϊ��" << m_Sum << "    ����ÿ����Ʒ��ƽ���ۼ�Ϊ��" << Commodity::average() << endl;
}

int main() {

	//������������
	Commodity comm[3] = { {101,5,23.5},{102,12,24.56},{103,100,21.5} };
	for (int i = 0; i < 3; i++) {
		comm[i].TotalP();       //����3��TotalP����
	}
	comm[0].display();

	getchar();
	return 0;
}