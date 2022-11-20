//#include <iostream>
//using namespace std;
//
////自定义如下形式的一个称为point 的类，其对象表示平面上的一个点(x,y)，
////并通过类成员方式对该类重载二目运算符“+”和“^”，用来求出两个对象的和以及两个对象（平面点）的距离。
////各运算符的使用含义（运算结果）如下所示：
//
////(1.2, -3.5) + (-1.5, 6) = (-0.3, 2.5)；
////(1.2, -3.5) ^ (-1.5, 6) = 9.87623。
//
//class Point {
//private:
//	double m_X;
//	double m_Y;
//	/*double m_Dts;*/
//public:
//	double m_Dts;
//	//构造函数
//	Point(double x = 0, double y = 0);
//	//重载+号运算符
//	Point operator+(Point& p);
//	//重装^号运算符
//	double operator^(Point& p2);
//	//打印结果
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
//	cout << "两个点之间的距离为：" << m_Dts << endl;
//}
//
//
//
//int main() {
//
//	//实例化两个点对象
//	Point p1(1.2,-3.5);
//	Point p2(-1.5, 6);
//	Point p3 = p1 + p2;
//	//两个点之间的距离运算
//	/*double dts = p1 ^ p2;*/
//	p3.m_Dts = p1 ^ p2;
//	p3.display();
//	//cout << "两个点之间的距离为：" << dts << endl;
//
//	getchar();
//	return 0;
//}