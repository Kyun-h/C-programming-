//���� ȭ�� ��ȯ

#include <stdio.h>

int main(void) {
	double celsius, fahrenheit;
	printf("��ȯ�� ���� �µ��� �Է� >> ");
	scanf("%lf", &celsius);

	fahrenheit = (9.0 / 5.0) * celsius + 32.0;
	printf("���� %.2f: ȭ�� %.2f\n", celsius, fahrenheit);

	return 0;
}