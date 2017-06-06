#include <stdio.h>

int main() {
	FILE *input1, *input2, *result;
	int m1[6], m2[6], r[6];

	input1 = fopen("input1.txt", "r");
	input2 = fopen("input2.txt", "r");

	for (int i = 0; i < 6; i++) {
		fscanf(input1, "%d", &m1[i]);
	}
	for (int i = 0; i < 6; i++) {
		fscanf(input2, "%d", &m2[i]);
	}
	fclose(input1);
	fclose(input2);

	result = fopen("result.txt", "w");
	for (int i = 0; i < 6; i++) {
		r[i] = m1[i] + m2[i];
		fprintf(result, "%-5d", r[i]);
		if (i % 3 == 2)
			fprintf(result, "\n");
	}
	fclose(result);

	printf("input1 matrix:\n");
	for (int i = 0; i < 6; i++) {
		printf("%-5d", m1[i]);
		if (i % 3 == 2)
			printf("\n");
	}

	printf("\ninput2 matrix:\n");
	for (int i = 0; i < 6; i++) {
		printf("%-5d", m2[i]);
		if (i % 3 == 2)
			printf("\n");
	}

	printf("\nresult matrix:\n");
	for (int i = 0; i < 6; i++) {
		printf("%-5d", r[i]);
		if (i % 3 == 2)
			printf("\n");
	}

	return 0;
}