//#include <iostream>
//using namespace std;
//
////��̬���뿪�ٶ�ά����ռ�
//
//void dynamicTwoArray() {
//	int row, col;
//	cout << "�������ά�����������" << endl;
//	cin >> row;
//
//	//����������
//	int** ptr = new int* [row];
//
//	//����������
//	cout << "�������ά�����������" << endl;
//	cin >> col;
//	for (int i = 0; i < row; i++) {
//		/**(ptr + i) = new int[col];*/
//		ptr[i] = new int[col];
//	}
//
//	//��������
//	cout << "��������Ҫ��������ݣ�" << endl;
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			cin >> ptr[i][j];
//		}
//	}
//
//	//�������
//	cout << "���������Ϊ��" << endl;
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			cout << ptr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	//�ͷſ��ٵĿռ�
//	for (int i = 0; i < row; i++) {
//		/*delete[] (*(ptr + i));*/
//		delete[] ptr[i];
//	}
//	delete[] ptr;
//}
//
//
//int main() {
//
//	dynamicTwoArray();
//
//	getchar();
//	return 0;
//}