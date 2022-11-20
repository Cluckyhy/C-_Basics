#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
//����ȫ�ֱ���
int number;              //�˵���
int year, month, day;     //�ꡢ�¡���
int i, j, t;             //forѭ���õ���
int s;                   //����X
char c;                  //��������������֣���ʵ�֡���������������˵����Ĺ���
char months[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };     //ƽ��ÿ���µ�����
void Pos(int x, int y);     //���λ��
void menu();                //���˵�����
void runnian();             //�����������ڶ���������28Ϊ29
void oneyear();             //���һ���������
void onemonth();            //���һ���µ�����
void week();				//��ʾ������

void Pos(int x, int y)//���λ�� 
{
	COORD pos;
	HANDLE hOutput;
	pos.X = x;
	pos.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, pos);
}
void menu()//���˵�����
{

	cout << "***********************************" << endl;
	cout << "*          ��ӭʹ��������         *" << endl;
	cout << "***********************************" << endl;
	cout << "��������" << endl;
	cout << "1.��ʾһ�������" << endl;
	cout << "2.��ʾһ�µ�����" << endl;
	cout << "3.��ʾĳһ�������ڼ�" << endl;
	cout << "0.�˳�" << endl;
	cout << "�����������(0~3):";
	cin >> number;
	if (number < 0 || number>3)
	{
		system("cls");
		Pos(20, 15);
		cout << "����������Ч,����������!" << endl;
		menu();
	}
}
void runnian()     //�����������ڶ���������28Ϊ29
{
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))     //�����жϹ�ʽ
	{
		months[2] = 29;
	}
}
void oneyear()     //���һ���������
{
	cout << "��������ݣ�";
	runnian();
	system("cls");      //����
	cout << "��������ݣ�" << year << endl << endl;
	s = (year - 1 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + 1) % 7;     //����1��1�յ�������
	for (i = 1; i <= 12; i++)
	{
		cout << i << "�·ݵ���������:" << endl;
		cout << setw(6) << "��" << setw(6) << "һ" << setw(6) << "��" << setw(6) << "��" << setw(6) << "��" << setw(6) << "��" << setw(6) << "��" << endl;
		for (j = 0; j < s; j++)
		{
			cout << setw(6) << " ";
		}
		for (t = 1; t <= months[i]; t++)
		{
			cout << setw(6) << t;
			s = (s + 1) % 7;
			if (s % 7 == 0)     //����ӡ��������ʱ������
			{
				cout << endl;
			}
		}
		cout << endl;
	}
	fflush(stdin);
	cout << "�밴������������˵�:";
	cin >> c;
	system("cls");
	menu();
}
void onemonth()//���һ���µ�����
{
	int s = 0;
	cout << "��������ݣ�";
	runnian();
	cout << "�������·ݣ�";
	cin >> month;
	system("cls");
	cout << "��������ݣ�" << year << endl << endl;
	cout << "�������·ݣ�" << month << endl << endl;
	for (i = 1; i <= month - 1; i++)
	{
		s = s + months[i];     //����1��1�յ���������ǰһ�������
	}
	s = (year - 1 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + 1 + s) % 7;     //�������ڵ�������
	cout << month << "�·ݵ���������:" << endl;
	cout << setw(6) << "��" << setw(6) << "һ" << setw(6) << "��" << setw(6) << "��" << setw(6) << "��" << setw(6) << "��" << setw(6) << "��" << endl;
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
	cout << "�밴������������˵�:";
	cin >> c;
	system("cls");
	menu();
}
void week()     //��ʾ������
{
	int s = 0;
	cout << "��������ݣ�";
	runnian();
	cout << "�������·ݣ�";
	cin >> month;
	cout << "���������ڣ�";
	cin >> day;
	system("cls");
	cout << "��������ݣ�" << year << endl << endl;
	cout << "�������·ݣ�" << month << endl << endl;
	cout << "���������ڣ�" << day << endl << endl;
	for (i = 1; i <= month - 1; i++)
	{
		s = s + months[i];
	}
	s = (year - 1 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + day + s) % 7;
	cout << "��ʾ������������:" << s << endl;
	cout << endl;
	cout << "�밴���������������:";
	cin >> c;
	system("cls");
	menu();
}
int main()//������
{
	setlocale(LC_ALL, "chs");//ת����
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
		months[2] = 28;  //��months[2]��Ϊ��ֵ
	}
	if (number == 0)
	{
		system("pause");
	}
	return 0;
}