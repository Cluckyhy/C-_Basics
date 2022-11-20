#include <iostream>
using namespace std;
#include <string>

//类做友元
//class Building;
//这里类的提前声明使用范围有限，所有第11行代码只能用类友元，只能进行引用，而不能做实际操作
class GoodGay;
class Building {
	//GoodGay类是本类的好朋友，可以访问本类中私有成员
	friend class GoodGay;

	//这里不可以用类成员函数做友元，因为在第7行代码中，只是对GoodGay进行声明，并没有实例化，所以下面的
	// GoodGay::vist()根本无法识别，所以只能用友元类！！！
	//friend void GoodGay::vist();
private:
	string m_BedRoom;  //卧室
public:
	string m_SettingRoom;  //客厅
	Building();
	void test(GoodGay& g);
};

class GoodGay {
	friend void Building::test(GoodGay& g);
	//friend class Building;
private:
	Building* building;
	string name;
	
public:
	GoodGay();
	void vist();  //参观函数  访问Building中的成员属性
};

//类外实现成员函数
Building::Building() {
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";
}
void Building::test(GoodGay &g) {
	cout << g.name << endl;
}

GoodGay::GoodGay() {
	//创建一个建筑物对象
	name = "张三";
	building = new Building;
}

void GoodGay::vist() {
	building->m_BedRoom = "啦啦啦";
	
	cout << "好基友类正在访问：" << building->m_SettingRoom << endl;
	cout << "好基友类正在访问：" << building->m_BedRoom << endl;
}

void test01() {
	GoodGay gg;
	gg.vist();
	Building bb;
	bb.test(gg);
}

int main() {

	test01();

	getchar();
	return 0;
}