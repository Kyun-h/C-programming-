#include <stdio.h>

int main(void) {

	short sVar = 32000;
	int iVar = -2140000000;

	printf("���� �� %d %d\n", sVar, iVar);

	long long dist1 = 2720000000000;
	__int64 dist2 = 4500000000000;

	printf("������ õ�ռ� ���� �Ÿ�(km): %lld\n", dist1);
	printf("�¾�� �ؿռ� ���� �Ÿ�(km): %lld\n", dist2);

	return 0;
}