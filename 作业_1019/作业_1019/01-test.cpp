#include <iostream>
using namespace std;

//实现学生类，包含成员函数，姓名，学号，数学成绩，英语成绩，语文成绩。
//用成员函数Set_data为其赋值，用Average函数计算每位同学的成绩平均值，
//用display函数显示每位同学的成绩和平均值。

class Student {
private:
	string m_Name;    //姓名
	int m_Sno;		  //学号
	int m_MathScore;  //数学成绩
	int m_EngScore;   //英语成绩
	int m_ChinaScore; //语文成绩
public:
	//给学生各属性赋值
	void Set_data(string name,int sno,int mathscore,int engscore,int chinascore) {
		m_Name = name;
		m_Sno = sno;
		m_MathScore = mathscore;
		m_EngScore = engscore;
		m_ChinaScore = chinascore;
	}
	//计算每位学生的成绩平均值
	double Average() {
		return (m_MathScore + m_EngScore + m_ChinaScore) / 3;
	}
	//显示每位同学的成绩和平均值
	void display() {
		cout << "该学生的数学成绩为： " << m_MathScore << endl;
		cout << "该学生的英语成绩为： " << m_EngScore << endl;
		cout << "该学生的语文成绩为： " << m_ChinaScore << endl;
		cout << "该学生的成绩平均值为： " << Average() << endl;
	}

};

int main01() {

	//创建一个学生
	Student s1;
	s1.Set_data("张三",202101,85,90,88);
	s1.display();

	getchar();
	return 0;
}