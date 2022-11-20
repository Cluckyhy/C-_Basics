#include <iostream>
using namespace std;

int main05() {
	//指针和数组
	//利用指针访问数组中的元素
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << array[5] << endl;
	int* p = array;  //数组名就是数组的首地址，array就是首地址；
	cout << "利用指针访问第一个元素：" << *p << endl;
	p++;  //让指针向后偏移4个字节，加1就是偏移4个字节，因为定义的是int型指针
	cout << "利用指针访问第二个元素：" << *p << endl;
	cout << "利用指针遍历数组" << endl;
	int* p2 = array;
	for (int i = 0; i < 10;i++) {
		cout << *p2 + i << endl;
	}
	getchar();
	return 0;
}