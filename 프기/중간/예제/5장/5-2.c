#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int cred2, cred3;
	cred2 = cred3 = 0;
	printf("2������ 3������ ���� ���� ���� ���� �Է� >>");
	scanf("%d %d", &cred2, &cred3);

	cred2 = 2 * cred2;
	printf("2���� ���� �� ���� : %d\n", cred2);
	printf("3���� ���� �� ���� : %d\n", cred3 *= 3);
	printf("�� ���� : %d\n", cred2 + cred3);

	return 0;
}