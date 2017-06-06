#include <stdio.h>

int main() {
	FILE *file;
	char input[1000], name[1000], major[1000];
	int search, stdnum, grade;
	int flag = 0;

	file = fopen("student_file.txt", "w");

	for (int i = 0; i < 5; i++) {
		printf("Name student_number Year Major: ");
		gets_s(input, 1000);
		fputs(input, file);
		fprintf(file, "\n");
	}

	fclose(file);

	file = fopen("student_file.txt", "r");

	printf("Insert the student number to find: ");
	scanf("%d", &search);

	for (int i = 0; i < 5; i++) {
		fscanf(file, "%s %d %d %s", name, &stdnum, &grade, major);

		if (search == stdnum) {
			printf("The major of student with ID %d is %s\n", stdnum, major);
			flag = 1;
		}
	}
	if (flag == 0)
		printf("We can't find ID %d\n", search);

	fclose(file);
	return 0;
}