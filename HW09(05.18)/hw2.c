#include <stdio.h>
#include <string.h>

int main() {
	FILE *file;
	char txt[10000], *token, *context = NULL;
	char name[1000], key[1000];
	int cnt = 0, total = 0;

	printf("Enter the file name and word: ");
	scanf("%s %s", name, key);

	file = fopen(name, "r");

	fgets(txt, 10000, file);
	fclose(file);

	token = strtok_s(txt, " ./?';!@#$%^&*()_+=-", &context);
	total++;
	do {
		if (strcmpi(token, key) == 0)
			cnt++;

		total++;

		token = strtok_s(NULL, " ./?';!@#$%^&*()_+=-", &context);
	} while (token != NULL);

	printf("The finding ratio: %d/%d\n", cnt, total);

	return 0;
}