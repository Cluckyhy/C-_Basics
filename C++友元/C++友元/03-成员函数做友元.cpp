//#include <iostream>
//using namespace std;
//
////��Ա��������Ԫ
//
//class Building;
//class GoodGay {
//public:
//	GoodGay();
//
//	void visit();    //��visit�������Է���Building�е�˽�г�Ա
//	void visit02();  //��visit���������Է���Building��˽�г�Ա
//
//	Building* building;  //���ڵ�6�д����Building�������������������Կ��Զ���һ��Building���͵�ָ��
//};
//
//class Building {
//	//���߱�����  GoodGay���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
//	friend void GoodGay::visit();
//
//private:
//	string m_BedRoom;  //����
//
//public:
//	string m_SettingRoom;  //����
//	Building();
//};
//
////����ʵ�ֳ�Ա����
//Building::Building() {
//	m_BedRoom = "����";
//	m_SettingRoom = "����";
//}
//GoodGay::GoodGay() {
//	building = new Building;
//}
//
//void GoodGay::visit() {
//	building->m_BedRoom = "������";
//	building->m_SettingRoom = "������";
//
//	cout << "visit �������ڷ��ʣ���" << building->m_SettingRoom << endl;
//
//	cout << "visit �������ڷ��ʣ���" << building->m_BedRoom << endl;
//
//	//building->m_BedRoom = "�ҵ�����" << endl;
//}
//void GoodGay::visit02() {
//	cout << "visit2 �������ڷ��ʣ���" << building->m_SettingRoom << endl;
//	//cout << "visit �������ڷ��ʣ���" << building->m_BedRoom << endl;
//}
//void test01() {
//	GoodGay gg;
//	gg.visit();
//	gg.visit02();
//}
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}