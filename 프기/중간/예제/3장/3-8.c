#include <stdio.h>

int main(void) {
	printf("%Cava", 'J');

	char sq = '\'';
	printf("%c\7\n", '\a');
	printf("%c�ڹ� ���'\n", sq);

	printf("\"C���\" ���� ����ִ�!\n");

	return 0;
}