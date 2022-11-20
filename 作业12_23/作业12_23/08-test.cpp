//#include <iostream>
//using namespace std;
//
////声明抽象基类Shape，由它派生出3个派生类：Circle(圆形)、Rectangle(矩形)、Triangle(三角形)、用一个函数
////printArea分别输出以上三者的面积，3个图形的数据在定义对象时给定
//
//const double pi = 3.14;
//
////声明抽象基类Shape
//class Shape {
//
//public:
//	//图形名称虚函数
//	virtual void GraphName() = 0;
//	//求图形面积函数
//	virtual double printArea() = 0;
//
//};
//
////定义一个圆形类继承自虚基类Shape
//class Circle : public Shape {
//
//private:
//	//圆形的圆心坐标
//	double m_X;
//	double m_Y;
//	//圆形半径
//	double m_R;
//
//public:
//	//构造函数
//	Circle(double x, double y,double r);
//
//	//重写父类中的虚函数
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
//	cout << "我是一个圆形" << endl;
//	cout << "我的圆心坐标是：" << "(" << m_X << "," << m_Y << ")" << endl;
//}
//double Circle::printArea() {
//	return pi * m_R * m_R;
//}
//
//
////定义一个矩形类继承自虚基类Shape
//class Rectangle : public Shape {
//private:
//	//矩形的长
//	double m_Length;
//	//矩形的宽
//	double m_Width;
//
//public:
//	//构造函数
//	Rectangle(double length, double width);
//	//重写父类的虚函数
//	void GraphName();
//	double printArea();
//};
//
////定义构造函数
//Rectangle::Rectangle(double length, double width) {
//	m_Length = length;
//	m_Width = width;
//}
//
////重写父类虚函数定义
//void Rectangle::GraphName() {
//	cout << "我是一个矩形" << endl;
//	cout << "我的长为：" << m_Length << " 宽为：" << m_Width << endl;
//}
//
//double Rectangle::printArea() {
//	return m_Length * m_Width;
//}
//
//
////定义一个三角形类继承自虚基类Shape
//class Triangle : public Shape {
//private:
//	//三角形的三边长
//	double m_A, m_B, m_C;
//public:
//	//构造函数
//	Triangle(double a, double b, double c);
//	//重写父类的虚函数
//	void GraphName();
//	double printArea();
//};
//
////构造函数的定义
//Triangle::Triangle(double a, double b, double c) {
//	m_A = a;
//	m_B = b;
//	m_C = c;
//}
//
////重写父类虚函数的定义
//void Triangle::GraphName() {
//	cout << "我是一个三角形" << endl;
//	cout << "我的三条边长为：" << m_A << "," << m_B << "," << m_C << endl;
//}
//
//double Triangle::printArea() {
//	double s = (m_A + m_B + m_C) / 2;
//	return sqrt(s * (s - m_A) * (s - m_B) * (s - m_C));
//}
//
//
////输出数据函数
//void display(Shape &graph) {
//	graph.GraphName();
//	cout << "图形面积为：" << graph.printArea() << endl;
//}
//
//
//
//int main() {
//
//	//实例化一个圆形
//	Circle c1(2.0, 3.0, 5.0);
//	//实例化一个矩形
//	Rectangle r1(4.0, 5.0);
//	//实例化一个三角形
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