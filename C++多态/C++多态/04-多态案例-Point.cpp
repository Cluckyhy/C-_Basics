//#include <iostream>
//using namespace std;
//
////Point��
//class Point {
//protected:
//	//����x��y
//	float m_X;
//	float m_Y;
//public:
//	friend ostream& operator<<(ostream& output, Point& po);
//	//friend istream& operator>>(istream& input, Point& po);
//	Point(float a = 0, float b = 0);
//	void setPoint(float, float);
//	float getX() const { return m_X; };
//	float getY() const { return m_Y; };
//};
//Point::Point(float a,float b) {
//	m_X = a;
//	m_Y = b;
//}
//void Point::setPoint(float a,float b) {
//	m_X = a;
//	m_Y = b;
//}
//
////������Circle(Բ��)
//class Circle : public Point {
//protected:
//	//�뾶R
//	float m_R;
//public:
//	friend ostream& operator<<(ostream& output, Circle& ci);
//	Circle(float a = 0, float b = 0, float r = 0);
//	void setR(float);
//	float getR() const { return m_R; };
//	float getarea() const { return 3.1415f * m_R * m_R; };
//
//};
//
//Circle::Circle(float a, float b, float r) {
//	m_X = a;
//	m_Y = b;
//	m_R = r;
//}
//void Circle::setR(float r) {
//	m_R = r;
//}
//
//
//
//
//
////������Cylinder(Բ����)
//class Cylinder : public Circle {
//protected:
//	//��H
//	int m_H;
//public:
//	friend ostream& operator<<(ostream& output, Cylinder& cy);
//};
//
//
//
////�����<<����
//ostream& operator<<(ostream &output,Point &po) {
//	output << "Բ������Ϊ��(" << po.m_X << "," << po.m_Y << ")" << endl;
//	return output;
//}
////Բ���<<����
//ostream& operator<<(ostream& output, Circle& ci) {
//	output << "Բ������Ϊ��(" << ci.m_X << "," << ci.m_Y << ")" << endl;
//	return output;
//}
////Բ�����<<����
//ostream& operator<<(ostream& output, Cylinder& cy) {
//	output << "Բ������Ϊ��(" << cy.m_X << "," << cy.m_Y << ")" << endl;
//	return output;
//}
//
//istream& operator>>(istream& input, Point& po) {
//	return input;
//}
//
//void test() {
//	//����
//	//Point p(3.5,6.4);
//	//cout << "x = " << p.getX() << ",y = " << p.getY() << endl;
//	//p.setPoint(8.5, 6.8);
//	//cout << "p(new):" << p << endl;
//	//Բ��
//	Circle ci(3.5,6.4,5.2);
//	cout << "ԭ����Բ��\nx =" << ci.getX() << ",y =" << ci.getY() << ",r =" << ci.getR() << ",area =" << ci.getarea() << endl;
//	ci.setPoint(5,5);
//	ci.setR(7.5);
//	cout << "�µ�Բ��" << ci;
//	Point& pRef = ci;
//	cout << "pRef : " << pRef;
//}
//
//
//
//int main() {
//
//	test();
//
//	
//	getchar();
//	return 0;
//}