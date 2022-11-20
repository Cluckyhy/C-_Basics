#include <iostream>
using namespace std;

class C1 {
	int m_a;  //默认权限  是私有
};

struct C2 {
	int m_a;  //默认权限  是公共
};

int main04() {

	//struct 和 class区别
	//struct 默认权限是  公共 public
	//class  默认权限是  私有 private 

	C1 c1;
	//c1.m_a = 100;  报错不可以访问  class默认是私有 不可以访问
	C2 c2;
	c2.m_a = 100;   //正确 在struct 默认的权限是公共，因此是可以访问的

	getchar();
	return 0;
}