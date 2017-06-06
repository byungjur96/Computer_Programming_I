#include <stdio.h>

int main() {
	FILE *input, *output;
	char txt[1000], to[1000];
	int n = 0;

	printf("Enter the name of file to read: ");
	scanf("%s", txt);

	printf("Enter the name of file to write: ");
	scanf("%s", to);

	input = fopen(txt, "r");
	if (input == NULL) {
		printf("Can not Read the file.");
		return 0;
	}

	output = fopen(to, "w");
	while (fscanf(input, "%c", &txt[n]) != EOF) {
		if (n != 0 && txt[n] == txt[n - 1] && txt[n] == '\n')
			continue;
		n++;
	}
	txt[n] = '\0';

	fprintf(output, "%s", txt);
	printf("Copy text complete!\n");


	fclose(input);
	fclose(output);
	return 0;
}