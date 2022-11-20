#include <iostream>
using namespace std;

//访问权限
//三种
//1、公共权限
//public:      成员类内可以访问  类外也可以访问
//2、保护权限
//protected:   成员类内可以访问  类外不可以访问  子类可以访问父亲中的保护内容
//3、私有权限
//private:     成员类内可以访问  只有自己类内可以访问

class Person {
	//公共权限
public:
	string m_Name;   //姓名

protected:
	string m_Car;    //汽车
	
private:
	int m_Password;  //银行卡密码
	
public:
	void func03() {
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};



int main03() {

	//实例化具体对象
	Person p1;
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";  保护权限的内容 在类外不可访问
	//p1.m_Password = 123; 私有权限的内容，类外不可访问

	getchar();
	return 0;
}