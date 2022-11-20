//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////动态申请二维数组
//void dynamicTwoArray() {
//	int i, j, row, col;
//	//先开辟行数组
//	printf("请输入二维数组行数：");
//	scanf("%d", &row);
//	int** prow = (int**)malloc(sizeof(int*) * row);
//	printf("请输入二维数组的列数：");
//	scanf("%d", &col);
//	for (int i = 0; i < row; i++) {
//		*(prow+i) = (int*)malloc(sizeof(int) * col);
//	}
//
//	//输入数据
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			//scanf("%d", &prow[i][j]);
//			scanf("%d", *(prow + i) + j);
//		}
//	}
//	//输出数据
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			printf("%d ", prow[i][j]);
//		}
//		printf("\n");
//	}
//	//释放开辟的二维空间
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