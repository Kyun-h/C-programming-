#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char abc, plus;

	printf("C ������?");
	abc = getchar();
	scanf("%c", &plus);

	printf("���� %c\n", plus);

	return 0;
}