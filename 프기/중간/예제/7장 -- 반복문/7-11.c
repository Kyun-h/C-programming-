#include <stdio.h>

int main(void) {
	int input;
	while (1) {
		printf("���� ���� �Ǵ� 0[����] �Է� �� [ENTER] >> ");
		scanf("%d", &input);
		if (input == 0)
			break;
		printf("�Է��� ���� %d: 16���� %#x\n", input, input);

		puts("����");
	}

	return 0;
}