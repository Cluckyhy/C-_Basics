//#include <iostream>
//using namespace std;
//
////1、编写基于对象的程序，完成求长方体类的表面积和体积，在类中用带参数的构造函数，并进行测试。
//
////创建长方体类
//class Cuboid {
//private:
//	int m_L;  //长方体的长
//	int m_W;  //长方体的宽
//	int m_H;  //长方体的高
//public:
//	//长方体类的带参构造函数
//	Cuboid(int l, int w, int h) {
//		m_L = l;
//		m_W = w;
//		m_H = h;
//	}
//	//求长方体表面积
//	int calculateS() {
//		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
//	}
//	//求长方体体积
//	int calculateV() {
//		return m_L * m_W * m_H;
//	}
//};
//
//int main() {
//
//	//实力化一个长方体对象
//	Cuboid c1(10, 15, 10);
//	cout << "c1长方体的表面积为： " << c1.calculateS()<<"\t" << "c1长方体的体积为： " << c1.calculateV() << endl;
//
//
//	getchar();
//	return 0;
//}