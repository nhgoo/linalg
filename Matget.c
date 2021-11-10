#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


void Matget() {

	FILE* fp;
	char file[] = "test";
	double val1, val2, val3;

	fp = fopen(file, "r");
	if (fp == NULL) {
		printf("files are not available.");
		exit(1);
	}

	printf("The Matrix elements:\n");

	while (!feof(fp)) {

		fscanf(fp, "%lf %lf %lf\n", &val1, &val2, &val3);
		printf("%f, %f, %f\n", val1, val2, val3);
	}

	fclose(fp);
}