#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int malloc_test() {

	int** array = NULL;
	int row = 3;
	int col = 3;

	array = (int**)malloc(sizeof(int*) * col);

	if (array == NULL) return -1;

	for (int i = 0; i < row; i++) {
		array[i] = (int*)malloc(sizeof(int) * col);
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			array[i][j] = i * col + j + 1; 
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf(" %d", array[i][j]); 
		}
		printf("\n");
	}
}

