//#include <iostream>
//using namespace std;
//
////2、在1题的基础上，用构造函数的默认参数给出长方体的默认长宽高分别为12,12,15。
//
////创建长方体类
//class Cuboid {
//private:
//	int m_L;  //长方体的长
//	int m_W;  //长方体的宽
//	int m_H;  //长方体的高
//public:
//	//长方体类的带参构造函数
//	Cuboid(int l=12, int w=12, int h=15) {
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
//	//创建一个不传参数的长方体对象
//	Cuboid c1;
//	cout << "c1长方体的表面积为： " << c1.calculateS() << "\t" << "c1长方体的体积为： " << c1.calculateV() << endl;
//
//	//创建一个带一个参数的长方体对象
//	Cuboid c2(20);
//	cout << "c2长方体的表面积为： " << c2.calculateS() << "\t" << "c2长方体的体积为： " << c2.calculateV() << endl;
//
//	//创建一个带两个参数的长方体对象
//	Cuboid c3(20,30);
//	cout << "c3长方体的表面积为： " << c3.calculateS() << "\t" << "c3长方体的体积为： " << c3.calculateV() << endl;
//
//	//创建一个带三个参数的长方体对象
//	Cuboid c4(20,30,40);
//	cout << "c4长方体的表面积为： " << c4.calculateS() << "\t" << "c4长方体的体积为： " << c4.calculateV() << endl;
//
//	getchar();
//	return 0;
//}