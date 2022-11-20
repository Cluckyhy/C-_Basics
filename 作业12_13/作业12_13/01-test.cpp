#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
//定义全局变量
int number;              //菜单键
int year, month, day;     //年、月、日
int i, j, t;             //for循环用的量
int s;                   //星期X
char c;                  //存放随机输入的数字，以实现“按任意键返回主菜单”的功能
char months[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };     //平年每个月的天数
void Pos(int x, int y);     //光标位置
void menu();                //主菜单函数
void runnian();             //如是闰年则变第二个月天数28为29
void oneyear();             //输出一整年的年历
void onemonth();            //输出一个月的月历
void week();				//显示星期数

void Pos(int x, int y)//光标位置 
{
	COORD pos;
	HANDLE hOutput;
	pos.X = x;
	pos.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, pos);
}
void menu()//主菜单函数
{

	cout << "***********************************" << endl;
	cout << "*          欢迎使用万年历         *" << endl;
	cout << "***********************************" << endl;
	cout << "操作键：" << endl;
	cout << "1.显示一年的年历" << endl;
	cout << "2.显示一月的月历" << endl;
	cout << "3.显示某一天是星期几" << endl;
	cout << "0.退出" << endl;
	cout << "请输入操作键(0~3):";
	cin >> number;
	if (number < 0 || number>3)
	{
		system("cls");
		Pos(20, 15);
		cout << "输入数字无效,请重新输入!" << endl;
		menu();
	}
}
void runnian()     //如是闰年则变第二个月天数28为29
{
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))     //闰年判断公式
	{
		months[2] = 29;
	}
}
void oneyear()     //输出一整年的年历
{
	cout << "请输入年份：";
	runnian();
	system("cls");      //清屏
	cout << "请输入年份：" << year << endl << endl;
	s = (year - 1 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + 1) % 7;     //该年1月1日的星期数
	for (i = 1; i <= 12; i++)
	{
		cout << i << "月份的月历如下:" << endl;
		cout << setw(6) << "日" << setw(6) << "一" << setw(6) << "二" << setw(6) << "三" << setw(6) << "四" << setw(6) << "五" << setw(6) << "六" << endl;
		for (j = 0; j < s; j++)
		{
			cout << setw(6) << " ";
		}
		for (t = 1; t <= months[i]; t++)
		{
			cout << setw(6) << t;
			s = (s + 1) % 7;
			if (s % 7 == 0)     //当打印到星期六时，换行
			{
				cout << endl;
			}
		}
		cout << endl;
	}
	fflush(stdin);
	cout << "请按任意键返回主菜单:";
	cin >> c;
	system("cls");
	menu();
}
void onemonth()//输出一个月的月历
{
	int s = 0;
	cout << "请输入年份：";
	runnian();
	cout << "请输入月份：";
	cin >> month;
	system("cls");
	cout << "请输入年份：" << year << endl << endl;
	cout << "请输入月份：" << month << endl << endl;
	for (i = 1; i <= month - 1; i++)
	{
		s = s + months[i];     //该年1月1日到所求日期前一天的天数
	}
	s = (year - 1 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + 1 + s) % 7;     //所求日期的星期数
	cout << month << "月份的月历如下:" << endl;
	cout << setw(6) << "日" << setw(6) << "一" << setw(6) << "二" << setw(6) << "三" << setw(6) << "四" << setw(6) << "五" << setw(6) << "六" << endl;
	for (j = 0; j < s; j++)
	{
		cout << setw(6) << " ";
	}
	for (t = 1; t <= months[month]; t++)
	{
		cout << setw(6) << t;
		s = (s + 1) % 7;
		if (s % 7 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
	cout << "请按任意键返回主菜单:";
	cin >> c;
	system("cls");
	menu();
}
void week()     //显示星期数
{
	int s = 0;
	cout << "请输入年份：";
	runnian();
	cout << "请输入月份：";
	cin >> month;
	cout << "请输入日期：";
	cin >> day;
	system("cls");
	cout << "请输入年份：" << year << endl << endl;
	cout << "请输入月份：" << month << endl << endl;
	cout << "请输入日期：" << day << endl << endl;
	for (i = 1; i <= month - 1; i++)
	{
		s = s + months[i];
	}
	s = (year - 1 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + day + s) % 7;
	cout << "显示的星期数如下:" << s << endl;
	cout << endl;
	cout << "请按任意键返回主界面:";
	cin >> c;
	system("cls");
	menu();
}
int main()//主函数
{
	setlocale(LC_ALL, "chs");//转中文
	menu();
	while (number != 0)
	{
		switch (number)
		{
		case 1:
		{
			oneyear();
			break;
		}
		case 2:
		{
			onemonth();
			break;
		}
		case 3:
		{
			week();
			break;
		}
		}
		months[2] = 28;  //把months[2]变为初值
	}
	if (number == 0)
	{
		system("pause");
	}
	return 0;
}