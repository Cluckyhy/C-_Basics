//#include <iostream>
//using namespace std;
//
////1�����常��--��Ʒ��
//class Commodity {
//protected:
//	//��Ʒ--����
//	int m_price;
//	//��Ʒ--����
//	string m_place;
//	//��Ʒ--���
//	int m_stock;
//public:
//	//���캯��--��ʼ����Ʒ
//	Commodity(int price, string place,int stock);
//	//��Ʒ�Ľ���
//	void stock(int inS);
//	//��Ʒ�ĳ���
//	void shipment(int outS);
//	//��Ʒ�ܼ۸����
//	int totalP();
//};
//
//Commodity::Commodity(int price, string place, int stock) {
//	m_price = price;
//	m_place = place;
//	m_stock = stock;
//}
//void Commodity::stock(int inS) {
//	//����������������
//	m_stock += inS;
//}
//void Commodity::shipment(int outS) {
//	//���������������
//	m_stock -= outS;
//}
//int Commodity::totalP() {
//	return m_price * m_stock;
//}
//
//
//
//
////2����������--������(�̳и���)
//class Shirt : public Commodity {
//protected:
//	//����--����
//	string m_cloth;
//public:
//	Shirt(int price, string place,int stock, string cloth);
//	void display() {
//		cout << "������\t" << m_price << "\t" << m_place << "\t" << m_stock << "\t" << m_cloth << endl;
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
////3����������--����(�̳и���)
//class Harbor : public Commodity {
//	//����--ľ��
//	string m_timber;
//	//����--��ɫ
//	string m_color;
//public:
//	Harbor(int price, string place,int stock, string timber, string color);
//	void display() {
//		cout << "����\t" << m_price << "\t" << m_place << "\t" << m_stock <<
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
////4����������--ñ��(�̳г�����)
//class Cap : public Shirt {
//	//ñ��--��ʽ(ƽ����ⶥ)
//	string m_style;
//public:
//	Cap(int price, string place,int stock, string colth, string style);
//	void display() {
//		cout << "ñ�ӣ�\t" <<m_price << "\t" << m_place << "\t" << m_stock <<"\t"<<m_cloth << "\t" << m_style << endl;
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
//	cout<<"\t�۸�"<<"\t����"<<"\t\t���"<<"\t����"<<"\t��ʽ"<<"\t��ɫ" << endl;
//	//ʵ��������
//	Shirt s1(55,"�����ϲ�",100,"˿��"	);
//	//ʵ����ñ��
//	Cap c1(20,"��������",200,"���ϲ�","ƽ��");
//	//ʵ��������
//	Harbor h1(99, "�����ƾ���ѧ", 10, "����", "��ɫ");
//	//չʾ��Ϣ
//	s1.display();
//	c1.display();
//	h1.display();
//
//	int num = 1;
//	while (num != 0) {
//		cout << "����������Ҫ�Ĳ���:" << endl;
//		cout << "--- ����(��1) --- ����(��2) --- �������Ʒ���ܼ�(��3) --- �˳�(��0)" << endl;
//		cin >> num;
//		switch (num) {
//			int ins1, ins2, ins3;
//			int outs1, outs2, outs3;
//			int ret1, ret2, ret3,Sret;
//		case 1:
//			cout << "�������������ƷҪ����������:>" << endl;
//			cin >> ins1 >> ins2 >> ins3;
//			s1.stock(ins1);
//			c1.stock(ins2);
//			h1.stock(ins3);
//			break;
//		case 2:
//			cout << "�������������ƷҪ����������:>" << endl;
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
//			cout << "�����ܼ�Ϊ��" << ret1 << endl;
//			cout << "ñ���ܼ�Ϊ��" << ret2 << endl;
//			cout << "�����ܼ�Ϊ��" << ret3 << endl;
//			cout << "������Ʒ���ܼ�Ϊ��" << Sret << endl;
//			break;
//		default:
//			if (num == 0) {
//				cout << "�����˳�������Ʒ��������ϢΪ��" << endl;
//			}
//			else {
//				cout << "����������" << endl;
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