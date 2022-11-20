//#include <iostream>
//using namespace std;
//#include <fstream>
//
////1、引入输入输出流头文件
////2、创建流对象
////3、打开文件
////4、写入文件
////5、关闭文件
//
//int main() {
//
//	//2、创建输出流对象
//	fstream ofs;
//	//3、打开文件
//	ofs.open("test.txt", ios::out);
//	//4、写入文件
//	if (!ofs.is_open()) {
//		cout << "文件不存在" << endl;
//	}
//	else {
//		ofs << "张三" << endl;
//		ofs << "18" << endl;
//		ofs << "江西赣州" << endl;
//	}
//	//5、关闭文件
//	ofs.close();
//
//	//2.2、创建输入流对象
//	fstream ifs;
//	//2.3、打开文件
//	ifs.open("test.txt", ios::in);
//	//2.4、读文件
//	string name, adds;
//	int age;
//	if (!ifs.is_open()) {
//		cout << "文件不存在" << endl;
//	}
//	else {
//		ifs >> name >> age >> adds;
//	}
//	//2.5、关闭文件
//	ifs.close();
//
//	cout << name << endl;
//	cout << age << endl;
//	cout << adds << endl;
//
//
//
//	getchar();
//	return 0;
//}