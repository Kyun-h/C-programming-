#include <stdio.h>

int main(void) {
	double temperature;

	printf("���� �µ� �Է�: ");
	scanf("%lf", &temperature);

	if (temperature >= 30.0) {
		printf("���� ���Ǻ��� �߷��մϴ�.\n");
		printf("�ǰ��� �����ϼ���.\n");

	}
	printf("���� �µ��� ���� %.2f�Դϴ�. \n", temperature);

	return 0;
}