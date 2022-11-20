#include <iostream>
using namespace std;

//自定义如下的taper圆锥体类并对其进行使用：该类具有私有数据成员r与h,分别表示圆锥体的底面半径和高；
//并提供构造函数以及计算侧面面积、全面积和体积的各公有成员函数
//而后编制主函数，对taper类进行使用：说明taper类对象,输入底圆半径与圆锥体的高
//而后负责计算出该圆锥体的侧面积、全面积以及体积并将各结果显示出来

const double PI = 3.14;

//定义一个teper圆锥体类
class Taper {
private:
	int m_R;  //底面半径
	int m_H;  //圆锥体高度
public:
	//自定义构造函数 设置默认值
	Taper() {
		m_R = 2;
		m_H = 3;
	}
	//设置圆锥体的底面积半径和高
	void setValue(int r,int h) {
		m_R = r;
		m_H = h;
	}
	//计算母线长度
	int taperL() {
		return sqrt(m_R * m_R + m_H * m_H);
	}
	//计算圆锥体侧积
	double calculate_Sc() {
		return PI * m_R * taperL();
	}
	//计算圆锥体全面积(底面积加侧面积)
	double calculate_S() {
		return (PI * m_R * m_R) + calculate_Sc();
	}
	//计算圆锥体的体积
	double calculateV() {
		return (PI * m_R * m_R * m_H) / 3;
	}
};

int main05() {

	//实例化一个圆锥体对象
	Taper ta1;
	ta1.setValue(2,5);
	cout << "圆锥体的侧面积为： " << ta1.calculate_Sc() << endl;
	cout << "圆锥体的全面积为： " << ta1.calculate_S() << endl;
	cout << "圆锥体的体积为： " << ta1.calculateV() << endl;

	getchar();
	return 0;
}