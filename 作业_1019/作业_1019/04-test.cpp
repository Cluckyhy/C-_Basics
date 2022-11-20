#include <iostream>
using namespace std;

//���Point��ʵ��ֱ������ת��Ϊ�����꣬����main�������ԡ�
//double atan2(double x,double y); x��yΪ���꣬�����У�
//Angle = hu*180/pi;  �Ƕ����
//x,y ��Ƕ�  th = atan2(x,y)*180/pi��
//�󼫰뾶  Lenth = sqrt(x*x+y*y);

const double PI = 3.14;

//����һ��Point��
class Point {
private:
	double m_X;
	double m_Y;
public:
	//���ú������
	void setX(double x) {
		m_X = x;
	}
	//��ȡ�������
	double getX() {
		return m_X;
	}
	//�����������
	void setY(double y) {
		m_Y = y;
	}
	//��ȡ�������
	double getY() {
		return m_Y;
	}
	//������
	double aCtan() {
		return atan2(m_X,m_Y);
	}
	//��Ƕ�
	double Angle() {
		return aCtan() * 180 / PI;
	}
	//�󼫰뾶r_Lenth����
	double r_Lenth() {
		return sqrt(m_X * m_X + m_Y * m_Y);
	}

};

int main04() {

	//ʵ����һ��Point����
	Point p1;  
	p1.setX(3);   //����X
	p1.setY(4);   //����Y
	cout << "P(" << p1.getX() << "," << p1.getY() << ")" << "\t" << "�������ʾΪ��" << "P(" << p1.r_Lenth() << "," << p1.Angle() << ")" << endl;

	getchar();
	return 0;
}