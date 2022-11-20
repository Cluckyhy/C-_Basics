//#include <iostream>
//using namespace std;
//
////成员函数做友元
//
//class Building;
//class GoodGay {
//public:
//	GoodGay();
//
//	void visit();    //让visit函数可以访问Building中的私有成员
//	void visit02();  //让visit函数不可以访问Building中私有成员
//
//	Building* building;  //由于第6行代码对Building这个类进行了声明，所以可以定义一个Building类型的指针
//};
//
//class Building {
//	//告诉编译器  GoodGay类下的visit成员函数作为本类的好朋友，可以访问私有成员
//	friend void GoodGay::visit();
//
//private:
//	string m_BedRoom;  //卧室
//
//public:
//	string m_SettingRoom;  //客厅
//	Building();
//};
//
////类外实现成员函数
//Building::Building() {
//	m_BedRoom = "卧室";
//	m_SettingRoom = "客厅";
//}
//GoodGay::GoodGay() {
//	building = new Building;
//}
//
//void GoodGay::visit() {
//	building->m_BedRoom = "啦啦啦";
//	building->m_SettingRoom = "呼呼呼";
//
//	cout << "visit 函数正在访问：　" << building->m_SettingRoom << endl;
//
//	cout << "visit 函数正在访问：　" << building->m_BedRoom << endl;
//
//	//building->m_BedRoom = "我的卧室" << endl;
//}
//void GoodGay::visit02() {
//	cout << "visit2 函数正在访问：　" << building->m_SettingRoom << endl;
//	//cout << "visit 函数正在访问：　" << building->m_BedRoom << endl;
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