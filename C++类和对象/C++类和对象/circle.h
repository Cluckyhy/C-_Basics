#pragma once
#include <iostream>
#include "point.h"
using namespace std;

//Բ��
class Circle {
private:
	int m_R;  //�뾶

	//�����п�������һ������Ϊ����ĳ�Ա
	Point m_Center;  //Բ��
public:
	//���ð뾶
	void setR(int r);
	//��ȡ�뾶
	int getR();
	//����Բ��
	void setCenter(Point center);
	//��ȡԲ��
	Point getCenter();
};