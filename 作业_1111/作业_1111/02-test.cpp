#include <iostream>
using namespace std;

//�Զ���������ʽ��һ����Ϊpoint ���࣬������ʾƽ���ϵ�һ����(x,y)��
//��ͨ�����Ա��ʽ�Ը������ض�Ŀ�������+���͡�^�������������������ĺ��Լ���������ƽ��㣩�ľ��롣
//���������ʹ�ú��壨��������������ʾ��

//(1.2, -3.5) + (-1.5, 6) = (-0.3, 2.5)��
//(1.2, -3.5) ^ (-1.5, 6) = 9.87623��


class Point {
private:
	double m_X;
	double m_Y;
public:
	Point(double x=0, double y=0);
	Point operator+(Point &p);
	double operator^(Point &p2);
	void display();
};
Point::Point(double x, double y) {
	m_X = x;
	m_Y = y;
}
Point Point::operator+(Point& p) {
	m_X = m_X + p.m_X;
	m_Y = m_Y + p.m_Y;
	return *this;
}
double Point::operator^(Point &p2) {
	return sqrt((p2.m_X-m_X) * (p2.m_X - m_X)+(p2.m_Y-m_Y)* (p2.m_Y - m_Y));
}
void Point::display() {
	cout << "(" << m_X << "," << m_Y << ")" << endl;
}

void test01() {
	Point p1(1.2,-3.5);
	Point p2(-1.5,6);
	Point p3 = p1 + p2;
	p3.display();
	p1 = *(new Point(1.2, -3.5));
	//double distance = p1 ^ p2;
	cout << (p1 ^ p2) << endl;
}


int main() {

	test01();
	
	getchar();
	return 0;
}