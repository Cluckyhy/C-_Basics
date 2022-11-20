//#include <iostream>
//using namespace std;
//#define PI 3.14
//#include <math.h>
//
////声明抽象基类Shape类
//class Shape {
//public:
//	//两个纯虚函数
//	virtual void printName() = 0;
//	virtual void printArea() const = 0;
//};
//
////定义子类圆形类继承基类Shape
//class Circle: public Shape {
//private:
//	//定义圆的圆心坐标与半径
//	float m_X;
//	float m_Y;
//	float m_R;
//public:
//	//友元函数
//	friend ostream& operator<<(ostream& output, Circle& c);
//	//构造函数
//	Circle(float x, float y, float r) :m_X(x), m_Y(y), m_R(r) {};
//	//重写抽象基类的纯虚函数
//	void printName();
//	void printArea() const;
//	//定义设置与获取圆心和半径方法
//	void setValue(float x, float y, float r);
//	float getX() const;
//	float getY() const;
//	float getR() const;
//};
////对成员函数的实现
//void Circle::setValue(float x, float y, float r) {
//	m_X = x;
//	m_Y = y;
//	m_R = r;
//}
//void Circle::printName() {
//	cout << "这是一个圆形" << endl;
//}
//void Circle::printArea() const {
//	cout << "圆形的面积为：" << (PI * m_R * m_R) << endl;
//}
//float Circle::getX() const {
//	return m_X;
//}
//float Circle::getY() const{
//	return m_Y;
//}
//float Circle::getR() const {
//	return m_R;
//}
////实现对<<运算符的重载
//ostream& operator<<(ostream& output, Circle& c) {
//	//c.printName();
//	output << "圆形的圆心为：" << "(" << c.getX() << "," << c.getY() << ")\t" << "半径为：" << c.getR()<< endl;
//	//output << "圆形的面积为：" << c.printArea() << endl;
//	return output;
//}
//
////定义子类矩形类继承基类Shape
//class Rectangle :public Shape {
//private:
//	//定义矩形类的长宽
//	float m_Width;
//	float m_Length;
//public:
//	//友元函数
//	friend ostream& operator<<(ostream& output, Rectangle re);
//	//构造函数
//	Rectangle(int w, int l) :m_Width(w), m_Length(l) {};
//	//重写象基类的纯虚函数
//	void printName();
//	void printArea() const;
//	//设置与获取矩形的长宽函数
//	void setValue(int w,int l);
//	float getWidth() const;
//	float getLength() const;
//};
////对成员函数的实现
//void Rectangle::printName() {
//	cout << "这是一个矩形" << endl;
//}
//void Rectangle::printArea() const {
//	cout << "矩形的面积为：" << (m_Width * m_Length) << endl;
//}
//void Rectangle::setValue(int w, int l) {
//	m_Width = w;
//	m_Length = l;
//}
//float Rectangle::getWidth() const {
//	return m_Width;
//}
//float Rectangle::getLength() const {
//	return m_Length;
//}
////友元函数的实现
//ostream& operator<<(ostream& output, Rectangle re) {
//	//re.printName();
//	output << "矩形的长为：" << re.getLength()<< "\t矩形的宽为：" << re.getWidth() << endl;
//	//output << "矩形的面积为：" << re.printArea() << endl;
//	return output;
//}
//
////定义子类三角形类继承基类Shape
//class Triangle :public Shape {
//private:
//	//定义三角形的三条边长
//	int m_A;
//	int m_B;
//	int m_C;
//public:
//	//友元函数
//	friend ostream& operator<<(ostream& output, Triangle& t);
//	//构造函数
//	Triangle(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {};
//	//重写抽象基类的纯虚函数
//	void printName();
//	void printArea() const;
//	//设置与获取三角形的三条边函数
//	void setValue(int a,int b,int c);
//	int getA() const;
//	int getB() const;
//	int getC() const;
//};
////对成员函数的实现
//void Triangle::printName() {
//	cout << "这是一个三角形" << endl;
//}
//void Triangle::printArea() const {
//	int s = (m_A + m_B + m_C) / 2;
//	cout << "三角形的面积为：" << sqrt(s * (s - m_A) * (s - m_B) * (s - m_C)) << endl;
//}
//void Triangle::setValue(int a,int b,int c) {
//	m_A = a;
//	m_B = b;
//	m_C = c;
//}
//int Triangle::getA() const {
//	return m_A;
//}
//int Triangle::getB() const {
//	return m_B;
//}
//int Triangle::getC() const {
//	return m_C;
//}
////友元函数的实现
//ostream& operator<<(ostream& output, Triangle& tr) {
//	//tr.printName();
//	output << "三角形的三边为：" << tr.getA() << "," << tr.getB() << "," << tr.getC() << endl;
//	//output << "三角形的面积为：" << tr.printArea() << endl;
//	return output;
//}
//
//
//int main() {
//
//	//实例化圆形对象
//	Circle c1(2.0, 3.0, 5.0);
//	//实例化矩形对象
//	Rectangle re(3.0, 4.0);
//	//实例化三角形对象
//	Triangle tr(3, 4, 5);
//	//定义一个指向基类对象的指针
//	Shape* p;
//	//用子类对象对基类指针初始化，实现多态
//	p = &c1;
//	//cout << (*p) << endl;		//不可以这样写，因为operator<<函数并不是属于类中的函数，所以不能用在多态上面
//	p->printName();
//	cout << c1;
//	p->printArea();
//	cout << endl;
//
//	p = &re;
//	//cout << (*p) << endl;
//	p->printName();
//	cout << re;
//	p->printArea();
//	cout << endl;
//
//	p = &tr;
//	//cout << (*p) << endl;
//	p->printName();
//	cout << tr;
//	p->printArea();
//
//	getchar();
//	return 0;
//}