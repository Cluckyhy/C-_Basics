#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;


void VectorCreate()
{
	int m, n;
	cout << "�������к��У�";
	cin >> m >> n;

	//ע��������һ�У�vector <int������ "> "֮��Ҫ�пո񣡷���ᱻ��Ϊ������ "> > "�� 
	vector<vector<int> >  p(m, vector<int>(n));

	cout << "���������ݣ�";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> p[i][j];

	cout << "������ݣ�" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(3) << p[i][j];
		cout << endl;
	}

}


int main() {

	VectorCreate();

	getchar();
	return 0;
}