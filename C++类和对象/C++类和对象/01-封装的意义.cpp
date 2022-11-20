#include <iostream>
using namespace std;

const double PI = 3.14;
//设计一个圆类，求圆的周长
//圆求周长的公式：2*PI*半径(R)

//class 代表设计一个类，类后面紧跟着的就是类名称
class Circle {
	//访问权限
	//公共权限
public:
	
	//属性
	int m_r;
	//行为
	//获取圆的周长
	double calculateZC() {
		return 2 * PI * m_r;
	}

};


int main01() {

	//通过圆类  创建一个具体的圆(对象)
	//实例化   （通过一个类来创建一个对象的过程）
	Circle c1;
	//给圆对象的属性进行赋值
	c1.m_r = 2;
	//2*PI*R;
	double result = c1.calculateZC();
	cout << "圆的周长为：" << result << endl;

	getchar();
	return 0;
}