//#include <iostream>
//using namespace std;
//
//class Box {
//private:
//	/*int height = 10;
//	int width = 10;
//	int length =10;*/
//	int height;
//	int width;
//	int length;
//public:
//	Box() {
//		height = 20;
//		width = 20;
//		length = 20;
//		cout << "Structor Called!" << endl;
//	}
//	Box(int, int, int);
//		/*height = h;
//		width = w;
//		length = l;*/
//	int volume();
//	~Box() {
//		cout <<height << "Destruct Called!" << endl;
//	}
//
//};
//Box::Box(int h, int w, int l) {
//	height = h;
//	width = w;
//	length = l;
//}
//int Box::volume() {
//	return (height * width * length);
//}
//
//int main() {
//
//	//Box b1(10,15,10);
//	Box b1;
//	cout << "The volume of Box1 is  " << b1.volume() << endl;
//	//Box b2(45, 22, 33);
//	Box b2(22,33,44);
//	cout << "The volume of Box2 is  " << b2.volume() << endl;
//
//
//	getchar();
//	//system("pause");
//	return 0;
//}