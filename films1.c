/* films1.c -- ʹ��һ���ṹ���� */
#include <stdio.h>
#include <string.h>
#define TSIZE	45	//����Ƭ���������С
#define FMAX	5	//ӰƬ���������

struct film {
	char title[TSIZE];
	int rating;
};
char* s_gets(char str[], int lim);

int main(void) {
	struct film movies[FMAX];
	int i = 0;
	int j;

	puts("Enter first movie title:");
	while (i < FMAX && s_gets(movies[i].title, TSIZE) != NULL && movies[i].title[0] != '\0') {
		puts("Enter your rating <0-10>:");
		scanf_s("%d", &movies[i++].rating);
		while (getchar() != '\n')
			continue;
		puts("Enter next movie title (empty line to stop):");
	}
}