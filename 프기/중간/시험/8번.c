/*
n=3��� �Է¹�����

  0
 123
  4

n=5��� �Է¹�����
   0
  123
 45678
  901
   2
*/

#include <stdio.h>

int main(void)
{
    int n, cnt = 0;
    scanf("%d", &n);

    // ��� �κ� ���
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++, cnt++)
        {
            printf("%d", cnt % 10);
        }
        printf("\n");
    }
    // �ϴ� �κ� ���
    for (int i = (n + 1) / 2; i > 0; i--)
    {
        for (int j = 0; j < 2 * i + 1; j++, cnt++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++, cnt++)
        {
            printf("%d", cnt % 10);
        }
    }

    return 0;
}