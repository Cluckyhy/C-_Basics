//#include <iostream>
//using namespace std;
//
////1、定义父类--商品类
//class Commodity {
//protected:
//	//商品--单价
//	int m_price;
//	//商品--产地
//	string m_place;
//	//商品--库存
//	int m_stock;
//public:
//	//构造函数--初始化商品
//	Commodity(int price, string place,int stock);
//	//商品的进货
//	void stock(int inS);
//	//商品的出货
//	void shipment(int outS);
//	//货品总价格计算
//	int totalP();
//};
//
//Commodity::Commodity(int price, string place, int stock) {
//	m_price = price;
//	m_place = place;
//	m_stock = stock;
//}
//void Commodity::stock(int inS) {
//	//进货，将货物增加
//	m_stock += inS;
//}
//void Commodity::shipment(int outS) {
//	//出货，将货物减少
//	m_stock -= outS;
//}
//int Commodity::totalP() {
//	return m_price * m_stock;
//}
//
//
//
//
////2、定义子类--衬衫类(继承父类)
//class Shirt : public Commodity {
//protected:
//	//衬衫--布料
//	string m_cloth;
//public:
//	Shirt(int price, string place,int stock, string cloth);
//	void display() {
//		cout << "衬衫：\t" << m_price << "\t" << m_place << "\t" << m_stock << "\t" << m_cloth << endl;
//	}
//};
//
//Shirt::Shirt(int price, string place, int stock, string cloth) :Commodity(price,place,stock) {
//	m_cloth = cloth;
//}
//
//
//
//
////3、定义子类--立柜(继承父类)
//class Harbor : public Commodity {
//	//立柜--木料
//	string m_timber;
//	//立柜--颜色
//	string m_color;
//public:
//	Harbor(int price, string place,int stock, string timber, string color);
//	void display() {
//		cout << "立柜：\t" << m_price << "\t" << m_place << "\t" << m_stock <<
//			"\t" << m_timber << "\t\t" << m_color << endl;
//	}
//};
//
//Harbor::Harbor(int price, string place, int stock, string timber, string color) :Commodity(price, place, stock) {
//	m_timber = timber;
//	m_color = color;
//}
//
//
//
//
////4、定义孙类--帽子(继承衬衫类)
//class Cap : public Shirt {
//	//帽子--样式(平顶或尖顶)
//	string m_style;
//public:
//	Cap(int price, string place,int stock, string colth, string style);
//	void display() {
//		cout << "帽子：\t" <<m_price << "\t" << m_place << "\t" << m_stock <<"\t"<<m_cloth << "\t" << m_style << endl;
//	}
//};
//
//Cap::Cap(int price, string place, int stock, string colth, string style) :Shirt(price,place,stock,colth) {
//	m_style = style;
//}
//
//
//
//void display() {
//	cout<<"\t价格"<<"\t产地"<<"\t\t库存"<<"\t材料"<<"\t样式"<<"\t颜色" << endl;
//	//实例化衬衫
//	Shirt s1(55,"江西南昌",100,"丝绸"	);
//	//实例化帽子
//	Cap c1(20,"江西赣州",200,"复合布","平顶");
//	//实例化立柜
//	Harbor h1(99, "江西财经大学", 10, "红松", "红色");
//	//展示信息
//	s1.display();
//	c1.display();
//	h1.display();
//
//	int num = 1;
//	while (num != 0) {
//		cout << "请输入你想要的操作:" << endl;
//		cout << "--- 进货(按1) --- 出货(按2) --- 计算各商品的总价(按3) --- 退出(按0)" << endl;
//		cin >> num;
//		switch (num) {
//			int ins1, ins2, ins3;
//			int outs1, outs2, outs3;
//			int ret1, ret2, ret3,Sret;
//		case 1:
//			cout << "请依次输入各商品要进货的数量:>" << endl;
//			cin >> ins1 >> ins2 >> ins3;
//			s1.stock(ins1);
//			c1.stock(ins2);
//			h1.stock(ins3);
//			break;
//		case 2:
//			cout << "请依次输入各商品要出货的数量:>" << endl;
//			cin >> outs1 >> outs2 >> outs3;
//			s1.shipment(outs1);
//			c1.shipment(outs2);
//			h1.shipment(outs3);
//			break;
//		case 3:
//			ret1 = s1.totalP();
//			ret2 = c1.totalP();
//			ret3 = h1.totalP();
//			Sret = ret1 + ret2 + ret3;
//			cout << "衬衫总价为：" << ret1 << endl;
//			cout << "帽子总价为：" << ret2 << endl;
//			cout << "立柜总价为：" << ret3 << endl;
//			cout << "所有商品的总价为：" << Sret << endl;
//			break;
//		default:
//			if (num == 0) {
//				cout << "你已退出，你商品的最终信息为：" << endl;
//			}
//			else {
//				cout << "你输入有误！" << endl;
//			}
//		}
//		//system("cls");
//		s1.display();
//		c1.display();
//		h1.display();
//	}
//
//}
//
//
//int main() {
//
//	display();
//
//	getchar();
//	return 0;
//}