#include <iostream>
using namespace std;

//设计长方体类，其三个属性长宽高，分别计算其表面积和体积。用main函数测试。

//定义一个长方体类
class Cube {
private:
	int m_L;  //长
	int m_W;  //宽
	int m_H;  //高
public:
	//设置长方体的长
	void setL(int l) {
		m_L = l;
	}
	//获取长方体的长
	int getL() {
		return m_L;
	}
	//设置长方体的宽
	void setW(int w) {
		m_W = w;
	}
	//获取长方体的宽
	int getW() {
		return m_W;
	}
	//设置长方体的高
	void setH(int h) {
		m_H = h;
	}
	//获取长方体的高
	int getH() {
		return m_H;
	}

	//计算长方体的表面积
	int calculateS() {
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
	}
	//计算长方体的体积
	int calculateV() {
		return m_L * m_W * m_H;
	}
};


int main02() {

	//实例化一个长方体对象
	Cube c1;
	c1.setL(10);
	c1.setW(15);
	c1.setH(10);
	cout << "一个长为：" << c1.getL()<<"\t" << "宽为：" << c1.getW() << "\t"
		 << "高为：" << c1.getH() << "\t" << "长方体的表面积为："
		 << c1.calculateS() << "\t" << "体积为：" << c1.calculateV() << endl;

	getchar();
	return 0;
}