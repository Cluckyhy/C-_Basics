//#include <iostream>
//using namespace std;
//
//class Time {
//public:
//	int hour;
//	int minute;
//	int sec;
//	/*void set() {
//		cin >> hour >> minute >> sec;
//	}*/
//};
//void set_time(Time&);
//void show_time(Time&);
//
//int main109() {
//	/*Time t1;
//	cout << "请输入现在时间的时数：" << endl;
//	cin >> t1.hour;
//	cout << "请输入现在时间的分数：" << endl;
//	cin >> t1.minute;
//	cout << "请输入现在时间的秒数：" << endl;
//	cin >> t1.sec;
//	cout << "现在时间为：" << endl;
//	cout << t1.hour << ":" << t1.minute << ":" << t1.sec << endl;
//
//	Time t2;
//	cout << "请输入现在时间的时数：" << endl;
//	cin >> t2.hour;
//	cout << "请输入现在时间的分数：" << endl;
//	cin >> t2.minute;
//	cout << "请输入现在时间的秒数：" << endl;
//	cin >> t2.sec;
//	cout << "现在时间为：" << endl;
//	cout << t2.hour << ":" << t2.minute << ":" << t2.sec << endl;*/
//	//cout<<sizeof(Time);
//	Time t1;
//	set_time(t1);
//	show_time(t1);
//	Time t2;
//	set_time(t2);
//	show_time(t2);
//	getchar();
//	return 0;
//}
//
//void set_time(Time &t) {
//	cout << "请输入现在时间的时数：" << endl;
//	cin >> t.hour;
//	cout << "请输入现在时间的分数：" << endl;
//	cin >> t.minute;
//	cout << "请输入现在时间的秒数：" << endl;
//	cin >> t.sec;
//	cout << "现在时间为：" << endl;
//}
//void show_time(Time &t) {
//	cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
//}