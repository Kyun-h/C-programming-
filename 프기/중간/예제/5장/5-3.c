#include <stdio.h>

int main(void) {
	int x = 0, y = 0;

	printf("�� ������ �Է� >>");
	scanf("%d %d", &x, &y);

	printf("%d\n", x += y);
	printf("%d %d\n", x,y);
	printf("%d\n", x -= y);
	printf("%d %d\n", x,y);

	return 0;
}