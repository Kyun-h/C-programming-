#include <stdio.h>

int main(void) {
	char c1 = 'a';
	char c2 = 65;
	char c3 = '\127';
	char c4 = '\x57';

	printf("���� ��(����): %c %c %c %c\n", c1, c2, c3, c4);
	printf("�ڵ� ��(��ȣ): %d %d %d %d\n", c1, c2, c3, c4);

	return 0;
}