//#include <iostream>
//using namespace std;
//
//// double atan2(double x,double y); x��yΪ���꣬�����У�
////Angle = hu*180/pi;  �Ƕ����
////x,y �Ƕ��뼫�뾶  th = atan2(x,y)*180/pi��
////Lenth = sqrt(x*x+y*y);
//
//class Array_max {
//private:
//	int array[5];
//	int max;
//	int len=5;
//public:
//	void set_value();
//	void max_array();
//	void show_array();
//};
//
//void Array_max::set_value() {
//	for (int i = 0; i <len;i++) {
//		cin >> array[i];
//	}
//}
//void Array_max::max_array() {
//	max = array[0];
//	for (int i = 0; i < len;i++) {
//		if (array[i]>max) {
//			max = array[i];
//		}
//	}
//}
//void Array_max::show_array() {
//	cout << "��������ֵΪ��" << max << endl;
//}
//
//
//int maindm02() {
//	Array_max arrmax;
//	arrmax.set_value();
//	arrmax.max_array();
//	arrmax.show_array();
//	getchar();
//	return 0;
//}