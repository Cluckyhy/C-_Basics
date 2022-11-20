#include <iostream>
using namespace std;

//设计Time类，属性包含时分秒，设计成员函数为其属性和显示其属性。用main函数测试。

//创建一个Time类
class Time {
private:
	int m_Hour;    //时
	int m_Minute;  //分
	int m_Second;  //秒
public:
	//设置时针
	void setHour(int hour) {
		m_Hour = hour;
	}
	//设置分针
	void setMinute(int minute) {
		m_Minute = minute;
	}
	//设置秒针
	void setSecond(int second) {
		m_Second = second;
	}
	//显示时间
	void showTime() {
		cout << "当前时间为" << m_Hour << "时" << m_Minute << "分" << m_Second << "秒" << endl;
	}
};

int main03() {

	//实例化一个时间对象
	Time t1;
	t1.setHour(8);
	t1.setMinute(35);
	t1.setSecond(58);
	t1.showTime();

	getchar();
	return 0;
}