//�α��� ���α׷���

#include <stdio.h>

int main(void) {
	int key = 12345678;

	int origin;
	printf("ID�� ����� 8�ڸ��� ������ �Է��ϼ���. >> ");
	scanf("%d", &origin);

	int encode = origin ^ key;
	printf("�Է��� ID: %d\n", origin);
	printf("��ȣȭ�Ͽ� ����� ID: %d\n", encode);

	int input;
	printf("�α����� ID�� �Է��ϼ��� >> ");
	scanf("%d", &input);

	int result = encode ^ key;
	printf("�α��� ���� ����: %d\n", input == result);
	return 0;
}