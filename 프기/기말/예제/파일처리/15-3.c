#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fname[] = "grade1.txt";
    char names[80];
    int cnt = 0;
    FILE *f;

    if ((f = fopen(fname, "w")) == NULL)
    {
        printf("������ ������ �ʽ��ϴ�.\n");
        exit(1);
    }

    printf("�̸��� ����(�߰�,�⸻)�� �Է��ϼ���.\n");
    fgets(names, 80, stdin);

    while (fgets(names, sizeof(names), stdin) != NULL && names[0] != '\n')
    {
        fprintf(f, "%d ", ++cnt);
        fputs(names, f);
        fgets(names, 80, stdin);
    }
    fclose(f);

    return 0;
}