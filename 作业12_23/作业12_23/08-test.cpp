//#include <iostream>
//using namespace std;
//
////�����������Shape������������3�������ࣺCircle(Բ��)��Rectangle(����)��Triangle(������)����һ������
////printArea�ֱ�����������ߵ������3��ͼ�ε������ڶ������ʱ����
//
//const double pi = 3.14;
//
////�����������Shape
//class Shape {
//
//public:
//	//ͼ�������麯��
//	virtual void GraphName() = 0;
//	//��ͼ���������
//	virtual double printArea() = 0;
//
//};
//
////����һ��Բ����̳��������Shape
//class Circle : public Shape {
//
//private:
//	//Բ�ε�Բ������
//	double m_X;
//	double m_Y;
//	//Բ�ΰ뾶
//	double m_R;
//
//public:
//	//���캯��
//	Circle(double x, double y,double r);
//
//	//��д�����е��麯��
//	void GraphName();
//	double printArea();
//
//};
//
//Circle::Circle(double x,double y,double r){
//	m_X = x;
// 
//	m_Y = y;
//	m_R = r;
//}
//
//void Circle::GraphName() {
//	cout << "����һ��Բ��" << endl;
//	cout << "�ҵ�Բ�������ǣ�" << "(" << m_X << "," << m_Y << ")" << endl;
//}
//double Circle::printArea() {
//	return pi * m_R * m_R;
//}
//
//
////����һ��������̳��������Shape
//class Rectangle : public Shape {
//private:
//	//���εĳ�
//	double m_Length;
//	//���εĿ�
//	double m_Width;
//
//public:
//	//���캯��
//	Rectangle(double length, double width);
//	//��д������麯��
//	void GraphName();
//	double printArea();
//};
//
////���幹�캯��
//Rectangle::Rectangle(double length, double width) {
//	m_Length = length;
//	m_Width = width;
//}
//
////��д�����麯������
//void Rectangle::GraphName() {
//	cout << "����һ������" << endl;
//	cout << "�ҵĳ�Ϊ��" << m_Length << " ��Ϊ��" << m_Width << endl;
//}
//
//double Rectangle::printArea() {
//	return m_Length * m_Width;
//}
//
//
////����һ����������̳��������Shape
//class Triangle : public Shape {
//private:
//	//�����ε����߳�
//	double m_A, m_B, m_C;
//public:
//	//���캯��
//	Triangle(double a, double b, double c);
//	//��д������麯��
//	void GraphName();
//	double printArea();
//};
//
////���캯���Ķ���
//Triangle::Triangle(double a, double b, double c) {
//	m_A = a;
//	m_B = b;
//	m_C = c;
//}
//
////��д�����麯���Ķ���
//void Triangle::GraphName() {
//	cout << "����һ��������" << endl;
//	cout << "�ҵ������߳�Ϊ��" << m_A << "," << m_B << "," << m_C << endl;
//}
//
//double Triangle::printArea() {
//	double s = (m_A + m_B + m_C) / 2;
//	return sqrt(s * (s - m_A) * (s - m_B) * (s - m_C));
//}
//
//
////������ݺ���
//void display(Shape &graph) {
//	graph.GraphName();
//	cout << "ͼ�����Ϊ��" << graph.printArea() << endl;
//}
//
//
//
//int main() {
//
//	//ʵ����һ��Բ��
//	Circle c1(2.0, 3.0, 5.0);
//	//ʵ����һ������
//	Rectangle r1(4.0, 5.0);
//	//ʵ����һ��������
//	Triangle t1(3.0, 4.0, 5.0);
//
//	display(c1);
//	display(r1);
//	display(t1);
//
//
//
//
//	getchar();
//	return 0;
//}