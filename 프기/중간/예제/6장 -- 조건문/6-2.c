//Ȧ¦ ���к�

#include <stdio.h>

int main(void) {
	int n;
	printf("���� �Է�: ");
	scanf("%d", &n);

	if (n % 2) {
		printf("Ȧ��\n");
	}
	else {
		printf("¦��\n");
	}

	((n % 2) ? printf("Ȧ��\n") : printf("¦��\n"));

	return 0;
}