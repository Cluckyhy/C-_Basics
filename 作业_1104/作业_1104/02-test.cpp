//#include <iostream>
//using namespace std;
//
////2����1��Ļ����ϣ��ù��캯����Ĭ�ϲ��������������Ĭ�ϳ���߷ֱ�Ϊ12,12,15��
//
////������������
//class Cuboid {
//private:
//	int m_L;  //������ĳ�
//	int m_W;  //������Ŀ�
//	int m_H;  //������ĸ�
//public:
//	//��������Ĵ��ι��캯��
//	Cuboid(int l=12, int w=12, int h=15) {
//		m_L = l;
//		m_W = w;
//		m_H = h;
//	}
//	//�󳤷�������
//	int calculateS() {
//		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
//	}
//	//�󳤷������
//	int calculateV() {
//		return m_L * m_W * m_H;
//	}
//};
//
//int main() {
//
//	//����һ�����������ĳ��������
//	Cuboid c1;
//	cout << "c1������ı����Ϊ�� " << c1.calculateS() << "\t" << "c1����������Ϊ�� " << c1.calculateV() << endl;
//
//	//����һ����һ�������ĳ��������
//	Cuboid c2(20);
//	cout << "c2������ı����Ϊ�� " << c2.calculateS() << "\t" << "c2����������Ϊ�� " << c2.calculateV() << endl;
//
//	//����һ�������������ĳ��������
//	Cuboid c3(20,30);
//	cout << "c3������ı����Ϊ�� " << c3.calculateS() << "\t" << "c3����������Ϊ�� " << c3.calculateV() << endl;
//
//	//����һ�������������ĳ��������
//	Cuboid c4(20,30,40);
//	cout << "c4������ı����Ϊ�� " << c4.calculateS() << "\t" << "c4����������Ϊ�� " << c4.calculateV() << endl;
//
//	getchar();
//	return 0;
//}