//8����:%#o , 16����: %#x

#include <stdio.h>

int main(void) {
	int input;
	do {
		printf("���� ���� �Ǵ� ������ 0[����] �Է� �� [ENTER] >> ");
		scanf("%d", &input);
		if (input <= 0)
			break;
		printf("���� %d: 8���� %#o 16���� %#x\n", input, input, input);
	} while (1);

	return 0;
}