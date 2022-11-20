#include <iostream>
#include <string>
using namespace std;

//学生的结构体定义
//如果下面老师结构体没改teacher01,这里的学生结构体改啥名都报错
//写struct student  报错
struct student {
	//姓名：
	string ssname;
	//分数：
	int Sscore;
};

//老师的结构体定义
//写struct teacher  报错
struct teacher {
	//老师的姓名：
	string tname;
	//学生数组
	struct student sArray[5];
};

//给老师和学生赋值的函数
void set_Value(struct teacher tArray[], int len) {
	//给老师赋值
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++) {
		tArray[i].tname = "Teacher_";
		tArray[i].tname += nameSeed[i];
		//通过循环给每名老师带的学生赋值
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].ssname = "Student_";
			tArray[i].sArray[j].ssname += nameSeed[j];
			tArray[i].sArray[j].Sscore = 60;
		}
	}
}
//打印所有信息的函数
void printInfo(struct teacher tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "老师的姓名： " << tArray[i].tname << endl;
		for (int j = 0; j < 5; j++) {
			cout << "学生姓名：" << tArray[i].sArray[j].ssname <<
				"考试的分数：" << tArray[i].sArray[j].Sscore << endl;
		}
	}
}


int main08() {

	//1、创建3名老师的数组
	struct teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	//2、通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	set_Value(tArray, len);
	//3、打印所有老师及所带学生信息
	printInfo(tArray, len);
	getchar();
	return 0;
}
//void setValue(struct teacher tArray[], int len) {
//	string nameSeed = "ABCDE";
//	//给老师赋值
//	for (int i = 0; i < len; i++) {
//		tArray[i].Tname = "Teacher_";
//		tArray[i].Tname += nameSeed[i];
//		//通过循环给每名老师带的学生赋值
//		for (int j =0; j < 5; j++) {
//			tArray[i].sArray[j].Sname = "Student_";
//			tArray[i].sArray[j].Sname += nameSeed[j];
//			tArray[i].sArray[j].Sscore = 60;
//		}
//	}
//}

//void printInfo(struct teacher tArray[], int len) {
//	for (int i = 0; i < len;i++) {
//		cout << "老师的姓名： " << tArray[i].Tname<< endl;
//		for (int j = 0; j <5;j++) {
//			cout << "学生姓名：" << tArray[i].sArray[j].Sname
//				 <<"考试的分数："<<tArray[i].sArray[j].Sscore<< endl;
//		}
//	}
//
//}