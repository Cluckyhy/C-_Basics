#pragma once;
#include <iostream>
using namespace std;

//点类

class Point {
private:
	int m_X;	//X坐标
	int m_Y;	//Y坐标
public:
	//设置X
	void setX(int x);
	//获取X
	int getX();
	//设置Y
	void setY(int y);
	//获取Y
	int getY();
};