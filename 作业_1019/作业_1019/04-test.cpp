#include <iostream>
using namespace std;

//设计Point类实现直角坐标转化为极坐标，并用main函数测试。
//double atan2(double x,double y); x和y为坐标，求反正切；
//Angle = hu*180/pi;  角度求解
//x,y 求角度  th = atan2(x,y)*180/pi；
//求极半径  Lenth = sqrt(x*x+y*y);

const double PI = 3.14;

//创建一个Point类
class Point {
private:
	double m_X;
	double m_Y;
public:
	//设置横坐标点
	void setX(double x) {
		m_X = x;
	}
	//获取横坐标点
	double getX() {
		return m_X;
	}
	//设置纵坐标点
	void setY(double y) {
		m_Y = y;
	}
	//获取纵坐标点
	double getY() {
		return m_Y;
	}
	//求反正切
	double aCtan() {
		return atan2(m_X,m_Y);
	}
	//求角度
	double Angle() {
		return aCtan() * 180 / PI;
	}
	//求极半径r_Lenth函数
	double r_Lenth() {
		return sqrt(m_X * m_X + m_Y * m_Y);
	}

};

int main04() {

	//实例化一个Point对象
	Point p1;  
	p1.setX(3);   //设置X
	p1.setY(4);   //设置Y
	cout << "P(" << p1.getX() << "," << p1.getY() << ")" << "\t" << "极坐标表示为：" << "P(" << p1.r_Lenth() << "," << p1.Angle() << ")" << endl;

	getchar();
	return 0;
}