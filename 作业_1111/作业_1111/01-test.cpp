//#include <iostream>
//using namespace std;
//
////�Զ���������ʽ��һ����Ϊpoint ���࣬������ʾƽ���ϵ�һ����(x,y)��
////��ͨ�����Ա��ʽ�Ը������ض�Ŀ�������+���͡�^�������������������ĺ��Լ���������ƽ��㣩�ľ��롣
////���������ʹ�ú��壨��������������ʾ��
//
////(1.2, -3.5) + (-1.5, 6) = (-0.3, 2.5)��
////(1.2, -3.5) ^ (-1.5, 6) = 9.87623��
//
//class Point {
//private:
//	double m_X;
//	double m_Y;
//	/*double m_Dts;*/
//public:
//	double m_Dts;
//	//���캯��
//	Point(double x = 0, double y = 0);
//	//����+�������
//	Point operator+(Point& p);
//	//��װ^�������
//	double operator^(Point& p2);
//	//��ӡ���
//	void display();
//};
//
//Point::Point(double x, double y) {
//	m_X = x;
//	m_Y = y;
//}
//Point Point::operator+(Point &p) {
//	Point p3;
//	p3.m_X = m_X + p.m_X;
//	p3.m_Y = m_Y + p.m_Y;
//	return p3;
//}
//double Point::operator^(Point &p2) {
//	m_Dts = sqrt((p2.m_X - m_X) * (p2.m_X - m_X) + (p2.m_Y - m_Y) * (p2.m_Y - m_Y));
//	return m_Dts;
//}
//void Point::display() {
//	cout << "x1+x2 = " << m_X << "   y1+y2 = " << m_Y << endl;
//	cout << "������֮��ľ���Ϊ��" << m_Dts << endl;
//}
//
//
//
//int main() {
//
//	//ʵ�������������
//	Point p1(1.2,-3.5);
//	Point p2(-1.5, 6);
//	Point p3 = p1 + p2;
//	//������֮��ľ�������
//	/*double dts = p1 ^ p2;*/
//	p3.m_Dts = p1 ^ p2;
//	p3.display();
//	//cout << "������֮��ľ���Ϊ��" << dts << endl;
//
//	getchar();
//	return 0;
//}