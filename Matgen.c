#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Matgen(int row, int col, char filename[]) {

	double** array = NULL;
	double val;

	FILE* fp;
	fp = fopen(filename, "w");

	array = (double**)malloc(sizeof(double*) * col);

	if (array == NULL) return -1;


	for (int i = 0; i < row; i++) {
		array[i] = (double*)malloc(sizeof(double) * col);
	}

	printf("Enter the matrix elements \n");

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("elements of %d_%d:", i+1, j+1);
			scanf("%lf", &val);
			array[i][j] = val;
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			fprintf(fp," %f", array[i][j]);
		}
		fprintf(fp, "\n");
	}

}



//void main() {
//
//	int row = 3;
//	int col = 3;
//	char files[] = "test";
//	Matgen(row, col, files);
//}

