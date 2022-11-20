//#include <iostream>
//using namespace std;
//#include <string>
//
////全局函数做友元
//
////建筑物类
//class Building {
//	//goodGay全局函数是 Building的好朋友，可以访问Building中的私有成员
//	friend void googGay(Building& building);
//private:
//	string m_BedRoom;  //卧室
//public:
//	string m_SettingRoom;  //客厅
//	Building() {
//		m_BedRoom = "卧室";
//		m_SettingRoom = "客厅";
//	}
//};
//
////全局函数  //不仅可以访问朋友类中的私有成员，也可以对friend类中的成员属性进行修改
//void googGay(Building &building) {
//	building.m_BedRoom = "啦啦啦";      
//	building.m_SettingRoom = "呼呼呼";
//	cout << "好基友全局函数 正在访问 ：" << building.m_SettingRoom << endl;
//	cout << "好基友全局函数 正在访问 ：" << building.m_BedRoom << endl;
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