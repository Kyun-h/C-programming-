//���󺰷� �������

#include <stdio.h>

int main(void) {
	int amount;
	printf("�� �ݾ� �Է� >> ");
	scanf("%d", &amount);
	printf("��� �ݾ�: %d\n", amount);

	int cnt50000 = amount / 50000;
	int changes = amount % 50000;
	printf("�������� %d��\n", cnt50000);

	int cnt10000 = changes / 10000;
	changes %= 10000;
	printf("������ %d��\n", cnt10000);

	int cnt5000 = changes / 5000;
	changes %= 5000;
	printf("��õ���� %d��\n", cnt5000);
	printf("������ %d��\n", changes);

	return 0;
}