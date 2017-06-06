#include <stdio.h>

struct student {
	char name[40];
	int stdnum;
	int kor;
	int math;
	int eng;
	float avg;
};

int main() {
	FILE *list;
	struct student s[5];

	list = fopen("stdlist.txt", "r");
	fread(&s, sizeof(struct student), 5, list);

	for (int i = 0; i < 5; i++) {
		s[i].avg = (s[i].eng + s[i].math + s[i].kor) / 3.0;
		printf("%-15s %-7d %-15f %-7d %-7d %d\n", s[i].name, s[i].stdnum, s[i].avg, s[i].kor, s[i].math, s[i].eng);
	}

	for (int i = 0; i < 5; i++) {
		for (int j = i; j > 0; j--) {
			if (s[j].avg > s[j - 1].avg) {
				struct student temp = s[j];
				s[j] = s[j - 1];
				s[j - 1] = temp;
			}
		}
	}

	printf("\nName		ID	Avg		KOR	MATH	ENG\n");
	for (int i = 0; i < 5; i++) {
		printf("%-15s %-7d %-15f %-7d %-7d %d\n", s[i].name, s[i].stdnum, s[i].avg, s[i].kor, s[i].math, s[i].eng);
	}

	return 0;
}