#include <iostream>
using namespace std;
#include <string>

//������Ԫ
//class Building;
//���������ǰ����ʹ�÷�Χ���ޣ����е�11�д���ֻ��������Ԫ��ֻ�ܽ������ã���������ʵ�ʲ���
class GoodGay;
class Building {
	//GoodGay���Ǳ���ĺ����ѣ����Է��ʱ�����˽�г�Ա
	friend class GoodGay;

	//���ﲻ���������Ա��������Ԫ����Ϊ�ڵ�7�д����У�ֻ�Ƕ�GoodGay������������û��ʵ���������������
	// GoodGay::vist()�����޷�ʶ������ֻ������Ԫ�࣡����
	//friend void GoodGay::vist();
private:
	string m_BedRoom;  //����
public:
	string m_SettingRoom;  //����
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
	void vist();  //�ιۺ���  ����Building�еĳ�Ա����
};

//����ʵ�ֳ�Ա����
Building::Building() {
	m_SettingRoom = "����";
	m_BedRoom = "����";
}
void Building::test(GoodGay &g) {
	cout << g.name << endl;
}

GoodGay::GoodGay() {
	//����һ�����������
	name = "����";
	building = new Building;
}

void GoodGay::vist() {
	building->m_BedRoom = "������";
	
	cout << "�û��������ڷ��ʣ�" << building->m_SettingRoom << endl;
	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
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