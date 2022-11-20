#include <iostream>
#include <fstream>
using namespace std;

fstream fin, fout;

int count = 0;

//写入f1,f2

void inputF1F2()

{

	fout.open("f1.txt", fstream::out);

	int i = 0;

	while (i < 15)

	{

		++i;

		fout << i * i + 0.5 << " ";
		//::count++;
	}

	fout.close();



	fout.open("f2.txt", fstream::out);

	i = 0;

	while (i < 10)

	{

		++i;

		fout << 10 * i + 0.5 << " ";

	}

	fout << 357.9;

	fout.close();

}

//读取f1到a1

void getF1(double a[15]) {

	fin.open("f1.txt", fstream::in);

	int i = 0;

	while (!fin.eof() && i < 15)

	{

		fin >> a[i];

		i++;

	}

	fin.close();

}

//读取f2到a2

void getF2(double a2[10]) {

	fin.open("f2.txt", fstream::in);

	int i = 0;

	while (!fin.eof() && i < 10)

	{

		fin >> a2[i];

		i++;

	}

	fin.close();

}

//合并a1,a2 到a3

void mergeArr(double a[15], double a2[10], double a3[25]) {

	int p1 = 0;

	int p2 = 0;

	int p3 = 0;



	while (p1 < 15 && p2 < 10)

	{

		a3[p3++] = a[p1] < a2[p2] ? a[p1++] : a2[p2++];

	}

	while (p1 < 15)

	{

		a3[p3++] = a[p1++];

	}

	while (p2 < 10)

	{

		a3[p3++] = a2[p2++];

	}



}

//写入f3并打印

void inputF3(double a3[25]) {

	fout.open("f3.txt", fstream::out);

	int i = 0;

	cout << "f3文件的值：" << endl;

	while (i < 25)

	{

		fout << a3[i] << " ";

		cout << a3[i] << " ";

		i++;

	}

	fout.close();

}



int main()

{


	double a[15];

	double a2[10];

	double a3[25];



	//写入f1,f2

	inputF1F2();

	//cout << ::count << endl;

	//读取f1到a1

	getF1(a);

	//读取f2到a2

	getF2(a2);



	//合并a1,a2 到a3

	mergeArr(a, a2, a3);

	//写入f3并打印

	inputF3(a3);



	return 0;

}