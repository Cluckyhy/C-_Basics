#include <iostream>
using namespace std;

//��Ƴ������࣬���������Գ���ߣ��ֱ�������������������main�������ԡ�

//����һ����������
class Cube {
private:
	int m_L;  //��
	int m_W;  //��
	int m_H;  //��
public:
	//���ó�����ĳ�
	void setL(int l) {
		m_L = l;
	}
	//��ȡ������ĳ�
	int getL() {
		return m_L;
	}
	//���ó�����Ŀ�
	void setW(int w) {
		m_W = w;
	}
	//��ȡ������Ŀ�
	int getW() {
		return m_W;
	}
	//���ó�����ĸ�
	void setH(int h) {
		m_H = h;
	}
	//��ȡ������ĸ�
	int getH() {
		return m_H;
	}

	//���㳤����ı����
	int calculateS() {
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
	}
	//���㳤��������
	int calculateV() {
		return m_L * m_W * m_H;
	}
};


int main02() {

	//ʵ����һ�����������
	Cube c1;
	c1.setL(10);
	c1.setW(15);
	c1.setH(10);
	cout << "һ����Ϊ��" << c1.getL()<<"\t" << "��Ϊ��" << c1.getW() << "\t"
		 << "��Ϊ��" << c1.getH() << "\t" << "������ı����Ϊ��"
		 << c1.calculateS() << "\t" << "���Ϊ��" << c1.calculateV() << endl;

	getchar();
	return 0;
}