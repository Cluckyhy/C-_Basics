#include <iostream>
using namespace std;

//自定义如下形式的一个称为point 的类，其对象表示平面上的一个点(x,y)，
//并通过类成员方式对该类重载二目运算符“+”和“^”，用来求出两个对象的和以及两个对象（平面点）的距离。
//各运算符的使用含义（运算结果）如下所示：

//(1.2, -3.5) + (-1.5, 6) = (-0.3, 2.5)；
//(1.2, -3.5) ^ (-1.5, 6) = 9.87623。


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