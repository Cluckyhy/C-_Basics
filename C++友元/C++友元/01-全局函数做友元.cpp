//#include <iostream>
//using namespace std;
//#include <string>
//
////ȫ�ֺ�������Ԫ
//
////��������
//class Building {
//	//goodGayȫ�ֺ����� Building�ĺ����ѣ����Է���Building�е�˽�г�Ա
//	friend void googGay(Building& building);
//private:
//	string m_BedRoom;  //����
//public:
//	string m_SettingRoom;  //����
//	Building() {
//		m_BedRoom = "����";
//		m_SettingRoom = "����";
//	}
//};
//
////ȫ�ֺ���  //�������Է����������е�˽�г�Ա��Ҳ���Զ�friend���еĳ�Ա���Խ����޸�
//void googGay(Building &building) {
//	building.m_BedRoom = "������";      
//	building.m_SettingRoom = "������";
//	cout << "�û���ȫ�ֺ��� ���ڷ��� ��" << building.m_SettingRoom << endl;
//	cout << "�û���ȫ�ֺ��� ���ڷ��� ��" << building.m_BedRoom << endl;
//}
//
//void test01() {
//	Building building;
//	googGay(building);
//}
//
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}