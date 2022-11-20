#include <iostream>
using namespace std;
#define PI 3.14
#include <math.h>

//�����������Shape��
class Shape {
public:
	//�������麯��
	virtual void printName() = 0;
	virtual float printArea() const = 0;
	virtual void display() = 0;
};

//��������Բ����̳л���Shape
class Circle : public Shape {
private:
	//����Բ��Բ��������뾶
	float m_X;
	float m_Y;
	float m_R;
public:
	//��Ԫ����
	friend ostream& operator<<(ostream& output, Circle& c);
	//���캯��
	Circle(float x, float y, float r) :m_X(x), m_Y(y), m_R(r) {};
	//��д�������Ĵ��麯��
	void printName();
	float printArea() const;
	void display();
	//�����������ȡԲ�ĺͰ뾶����
	void setValue(float x, float y, float r);
	float getX() const;
	float getY() const;
	float getR() const;
};
//�Գ�Ա������ʵ��
void Circle::setValue(float x, float y, float r) {
	m_X = x;
	m_Y = y;
	m_R = r;
}
void Circle::printName() {
	cout << "����һ��Բ��" << endl;
}
float Circle::printArea() const {
	return (PI * m_R * m_R);
}
float Circle::getX() const {
	return m_X;
}
float Circle::getY() const {
	return m_Y;
}
float Circle::getR() const {
	return m_R;
}
void Circle::display() {
	cout << "Բ�ε�Բ��Ϊ��" << "(" << getX() << "," << getY() << ")\t" << "�뾶Ϊ��" << getR() << endl;
	cout << "Բ�ε����Ϊ��" << printArea() << endl;
}
//ʵ�ֶ�<<�����������
ostream& operator<<(ostream& output, Circle& c) {
	c.printName();
	output << "Բ�ε�Բ��Ϊ��" << "(" << c.getX() << "," << c.getY() << ")\t" << "�뾶Ϊ��" << c.getR() << endl;
	output << "Բ�ε����Ϊ��" << c.printArea() << endl;
	return output;
}

//�������������̳л���Shape
class Rectangle :public Shape {
private:
	//���������ĳ���
	float m_Width;
	float m_Length;
public:
	//��Ԫ����
	friend ostream& operator<<(ostream& output, Rectangle re);
	//���캯��
	Rectangle(float w, float l) :m_Width(w), m_Length(l) {};
	//��д�����Ĵ��麯��
	void printName();
	float printArea() const;
	void display();
	//�������ȡ���εĳ�����
	void setValue(float w, float l);
	float getWidth() const;
	float getLength() const;
};
//�Գ�Ա������ʵ��
void Rectangle::printName() {
	cout << "����һ������" << endl;
}
float Rectangle::printArea() const {
	return (m_Width * m_Length);
}
void Rectangle::setValue(float w, float l) {
	m_Width = w;
	m_Length = l;
}
float Rectangle::getWidth() const {
	return m_Width;
}
float Rectangle::getLength() const {
	return m_Length;
}
void Rectangle::display() {
	cout << "���εĳ�Ϊ��" << getLength() << "\t���εĿ�Ϊ��" << getWidth() << endl;
	cout << "���ε����Ϊ��" << printArea() << endl;
}
//��Ԫ������ʵ��
ostream& operator<<(ostream& output, Rectangle re) {
	re.printName();
	output << "���εĳ�Ϊ��" << re.getLength() << "\t���εĿ�Ϊ��" << re.getWidth() << endl;
	output << "���ε����Ϊ��" << re.printArea() << endl;
	return output;
}

//����������������̳л���Shape
class Triangle :public Shape {
private:
	//���������ε������߳�
	int m_A;
	int m_B;
	int m_C;
public:
	//��Ԫ����
	friend ostream& operator<<(ostream& output, Triangle& t);
	//���캯��
	Triangle(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {};
	//��д�������Ĵ��麯��
	void printName();
	float printArea() const;
	void display();
	//�������ȡ�����ε������ߺ���
	void setValue(int a, int b, int c);
	int getA() const;
	int getB() const;
	int getC() const;
};
//�Գ�Ա������ʵ��
void Triangle::printName() {
	cout << "����һ��������" << endl;
}
float Triangle::printArea() const {
	int s = (m_A + m_B + m_C) / 2;
	return sqrt(s * (s - m_A) * (s - m_B) * (s - m_C));
}
void Triangle::setValue(int a, int b, int c) {
	m_A = a;
	m_B = b;
	m_C = c;
}
int Triangle::getA() const {
	return m_A;
}
int Triangle::getB() const {
	return m_B;
}
int Triangle::getC() const {
	return m_C;
}
void Triangle::display() {
	cout << "�����ε�����Ϊ��" << getA() << "," << getB() << "," << getC() << endl;
	cout << "�����ε����Ϊ��" << printArea() << endl;
}
//��Ԫ������ʵ��
ostream& operator<<(ostream& output, Triangle& tr) {
	tr.printName();
	output << "�����ε�����Ϊ��" << tr.getA() << "," << tr.getB() << "," << tr.getC() << endl;
	output << "�����ε����Ϊ��" << tr.printArea() << endl;
	return output;
}

//��ʾ����
void showMessage(Shape &p) {
	p.display();
}




int main() {

	//ʵ����Բ�ζ���
	Circle c1(2.0, 3.0, 5.0);
	//ʵ�������ζ���
	Rectangle re(3.0, 4.0);
	//ʵ���������ζ���
	Triangle tr(3, 4, 5);


	//����һ��ָ���������ָ��
	//Shape* p;
	//���������Ի���ָ���ʼ����ʵ�ֶ�̬
	//p = &c1;
	////cout << (*p) << endl;		//����������д����Ϊoperator<<�����������������еĺ��������Բ������ڶ�̬����
	//p->printName();
	//cout << c1;
	//p->printArea();
	//cout << endl;

	//p = &re;
	////cout << (*p) << endl;
	//p->printName();
	//cout << re;
	//p->printArea();
	//cout << endl;

	//p = &tr;
	////cout << (*p) << endl;
	//p->printName();
	//cout << tr;
	//p->printArea();

	c1.setValue(5.0, 8.0, 6);
	re.setValue(9.0, 7.7);
	tr.setValue(5, 8, 9);



	
	showMessage(c1);
	showMessage(re);
	showMessage(tr);

	getchar();
	return 0;
}