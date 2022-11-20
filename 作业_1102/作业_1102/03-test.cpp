#include <iostream>
using namespace std;

//本章课后习题第9题的编程。

//声明商品类
class Commodity {
private:
	int m_Num;				   //销货员号
	int m_Quantity;			   //销货件数
	double m_Price;            //售货单价
	static double m_Discount;  //折扣
	static double m_Sum;       //总售款额
	static int m_N;		       //销售总件数
public:
	//构造函数
	Commodity(int num,int quantity,double price);
	//计算销售总价函数
	void TotalP();
	//计算平均售价函数
	static double average();
	//输出结果
	void display();
};

Commodity::Commodity(int num, int quantity, double price) {
	m_Num = num;
	m_Quantity = quantity;
	m_Price = price;
}

//折扣为九八折
double Commodity::m_Discount = 0.98;
//总销售款额
double Commodity::m_Sum = 0;
//销售总件数
int Commodity::m_N = 0;

void Commodity::TotalP() {
	if (m_Quantity > 10) {
		Commodity::m_Sum += m_Quantity * m_Price * m_Discount;
	}
	else {
		Commodity::m_Sum += m_Quantity * m_Price;
	}
	Commodity::m_N += m_Quantity;
}
double Commodity::average() {
	return m_Sum / m_N;
}
void Commodity::display() {
	cout << "当日此商品的总销售款为：" << m_Sum << "    并且每件商品的平均售价为：" << Commodity::average() << endl;
}

int main() {

	//创建对象数组
	Commodity comm[3] = { {101,5,23.5},{102,12,24.56},{103,100,21.5} };
	for (int i = 0; i < 3; i++) {
		comm[i].TotalP();       //调用3次TotalP函数
	}
	comm[0].display();

	getchar();
	return 0;
}