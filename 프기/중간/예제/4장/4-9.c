#include <stdio.h>

int main(void) {
	int hex;
	printf("10���� ����(1A ��)�� �Է��ϼ��� >> ");
	scanf("%x", &hex);
	printf("%o %d %x\n\n", hex, hex, hex);

	printf("10���� ����(0���� ǥ�ù������ 0x1a ��)�� �Է��ϼ��� >> ");
	scanf("%i", &hex);
	printf("%#o %d %#x\n\n", hex, hex, hex);

	return 0;
}