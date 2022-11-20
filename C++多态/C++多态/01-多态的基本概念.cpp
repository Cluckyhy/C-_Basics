//#include <iostream>
//using namespace std;
//
////多态
//
////动物类
//class Animal {
//public:
//	//虚函数
//	virtual void speak() {
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal {
//public:
//	//重写：函数返回值类型 函数名 参数列表 完全相同
//	//这里的virtual可写可不写，但是基类的virtual是必须要写的
//	virtual void speak() {
//		cout << "小猫在说话" << endl;
//	}
//};
//
////地址早绑定  在编译阶段确定函数地址
////如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
//
////动态多态满足条件
////1、有继承关系
////2、子类要重写父类的虚函数
//
////动态多态
////父类的指针或者引用 指向子类的对象
//void doSpeak(Animal &ani) {		//Animal &ani = cat;
//	ani.speak();
//}
//
//void test01() {
//
//	Cat c1;
//	doSpeak(c1);
//}
//
//
//
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}