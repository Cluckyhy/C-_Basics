//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////��̬�����ά����
//void dynamicTwoArray() {
//	int i, j, row, col;
//	//�ȿ���������
//	printf("�������ά����������");
//	scanf("%d", &row);
//	int** prow = (int**)malloc(sizeof(int*) * row);
//	printf("�������ά�����������");
//	scanf("%d", &col);
//	for (int i = 0; i < row; i++) {
//		*(prow+i) = (int*)malloc(sizeof(int) * col);
//	}
//
//	//��������
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			//scanf("%d", &prow[i][j]);
//			scanf("%d", *(prow + i) + j);
//		}
//	}
//	//�������
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			printf("%d ", prow[i][j]);
//		}
//		printf("\n");
//	}
//	//�ͷſ��ٵĶ�ά�ռ�
//	for (i = 0; i < row; i++) {
//		free(*(prow + i));
//	}
//	
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