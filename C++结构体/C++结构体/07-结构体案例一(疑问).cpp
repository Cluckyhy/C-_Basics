#include <iostream>
using namespace std;
#include <string>


//为啥通过键盘赋值就会报错？？？


//定义学生结构体
struct student {
	string name;
	int score;
};
//定义老师结构体
struct teacher07 {
	string name;
	struct student s[5];
};
//声明给老师和学生复制函数
//void set_value(teacher07 *t,student *s);
void set_value(teacher07 teaarray[], int len);

int main() {
	//创建学生结构体变量
	struct student s;
	//创建一个数组存放3名老师
	teacher07 teaarray[3];
	int len = sizeof(teaarray) / sizeof(teaarray[0]);
	//打印所有老师及学生信息
	/*for (int i = 0; i < len; i++) {*/
		//set_value(teaarray,teaarray[i].s);
		set_value(teaarray, len);
	//}
	/*set_value(teaarray, len);*/
	for (int j = 0; j < len; j++) {
		cout << "第" << j + 1 << "位老师的姓名为：" << teaarray[j].name << endl;
		for (int k = 0; k < 5;k++) {
			cout << "第" << j+1 << "位老师辅导的第"<< k+1 <<"学生姓名为：" << teaarray[j].s[k].name << endl;
			cout << "第" << j+1 << "位老师辅导的第" << k+1 << "学生分数为：" << teaarray[j].s[k].score << endl;
		}
	}
	getchar();
	return 0;
}
//定义赋值函数
//void set_value(teacher07 *t,student *s) {
	/*t.name = "老王";
	t.s[0].name = "李四";
	t.s[0].score = 86;
	t.s[1].name = "赵四";
	t.s[1].score = 56;
	t.s[2].name = "张三";
	t.s[2].score = 70;
	t.s[3].name = "胖妞";
	t.s[3].score = 38;
	t.s[4].name = "李达";
	t.s[4].score = 60;*/
//	for (int i = 0; i < 3;i++) {
//		cout << "请输入第：" << i + 1 << "位老师的姓名：" << endl;
//		cin >> t[i].name;
//		for (int j = 0; j < 5; j++) {
//			cout << "请输入第：" << j+1 << "个学生的姓名：" << endl;
//			cin >> s[j].name;
//			cout << "请输入第：" << j+1 << "个学生的分数：" << endl;
//			cin >> s[j].score;
//		}
//	}
//}
void set_value(teacher07 teaarray[], int len) {
	for (int i = 0; i < len;i++) {
		cout << "请输入第：" << i + 1 << "位老师的姓名：" << endl;
		cin >> teaarray[i].name;
		for (int j = 0; j < 5;j++) {
			cout << "请输入第：" << j + 1 << "个学生的姓名：" << endl;
			cin >> teaarray[i].s[j].name;
			cout << "请输入第：" << j + 1 << "个学生的分数：" << endl;
			cin >> teaarray[i].s[j].score;
		}
	}
}