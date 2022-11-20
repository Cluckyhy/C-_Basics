//#include <iostream>
//using namespace std;
//
////Point类
//class Point {
//protected:
//	//坐标x和y
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
////派生类Circle(圆类)
//class Circle : public Point {
//protected:
//	//半径R
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
////派生类Cylinder(圆柱类)
//class Cylinder : public Circle {
//protected:
//	//高H
//	int m_H;
//public:
//	friend ostream& operator<<(ostream& output, Cylinder& cy);
//};
//
//
//
////点类的<<重载
//ostream& operator<<(ostream &output,Point &po) {
//	output << "圆心坐标为：(" << po.m_X << "," << po.m_Y << ")" << endl;
//	return output;
//}
////圆类的<<重载
//ostream& operator<<(ostream& output, Circle& ci) {
//	output << "圆心坐标为：(" << ci.m_X << "," << ci.m_Y << ")" << endl;
//	return output;
//}
////圆柱类的<<重载
//ostream& operator<<(ostream& output, Cylinder& cy) {
//	output << "圆心坐标为：(" << cy.m_X << "," << cy.m_Y << ")" << endl;
//	return output;
//}
//
//istream& operator>>(istream& input, Point& po) {
//	return input;
//}
//
//void test() {
//	//点类
//	//Point p(3.5,6.4);
//	//cout << "x = " << p.getX() << ",y = " << p.getY() << endl;
//	//p.setPoint(8.5, 6.8);
//	//cout << "p(new):" << p << endl;
//	//圆类
//	Circle ci(3.5,6.4,5.2);
//	cout << "原来的圆：\nx =" << ci.getX() << ",y =" << ci.getY() << ",r =" << ci.getR() << ",area =" << ci.getarea() << endl;
//	ci.setPoint(5,5);
//	ci.setR(7.5);
//	cout << "新的圆：" << ci;
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