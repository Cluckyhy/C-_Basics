#pragma once;
#include <iostream>
using namespace std;

//����

class Point {
private:
	int m_X;	//X����
	int m_Y;	//Y����
public:
	//����X
	void setX(int x);
	//��ȡX
	int getX();
	//����Y
	void setY(int y);
	//��ȡY
	int getY();
};