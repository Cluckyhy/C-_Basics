#include <iostream>
using namespace std;

//Animal类内部结构
//vfptr  <---->  虚函数(表)指针
//vfptr 指向 vftable(虚函数表)
//v -- virtual
//f -- function
//ptr -- pointer


class Animal {
public:
	
	virtual void speak() {
		cout << "动物在说话" << endl;
	}
	virtual void can() {
		cout << "我会叫" << endl;
	}
};


//Cat类内部结构
//继承了父类的vfptr，并且指向了子类的虚函数表
//当子类没有重写父类的虚函数的话，虚函数表里存放的还是父类的Animal::speak
//一旦子类重写后，子类会把子类虚函数表中的内容进行覆盖操作，将替换成子类的虚函数地址，--Cat::speak替换Animal::speak


class Cat :public Animal {
public:
	void speak() {
		cout << "小猫在说话" << endl;
	}
	void can() {
		cout << "我会喵喵叫" << endl;
	}
};
void DoSpeak(Animal &ani) {
	ani.speak();
}

int main() {

	//没加virtual前，Animal类是空类，空类的大小为 1
	//cout << "sizeof(Animal) = " << sizeof(Animal);
	//加上virtal后，Animal类的大小为 4	--里面多了一个指针占4个字节
	cout << "sizeof(Animal) = " << sizeof(Animal);

	getchar();
	return 0;
}