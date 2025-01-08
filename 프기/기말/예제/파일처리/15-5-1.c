// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// int main(void)
// {
//     FILE *f1, *f2;
//     if ((f1 = fopen("15-5-1.c", "r") == NULL))
//     {
//         printf("������ ������ �ʽ��ϴ�.\n");
//         exit(1);
//     }

//     if ((f2 = fopen("15-5-test.txt", "w")) == NULL)
//     {
//         printf("������ ������ �ʽ��ϴ�.\n");
//         exit(1);
//     }

//     char a;
//     while ((a = getc(f1)) != EOF)
//     {
//         if (isalpha(a))
//             if (islower(a))
//                 a = toupper(a);
//             else if (isupper(a))
//                 a = tolower(a);
//         putc(a, f2);
//     }

//     fclose(f1);
//     fclose(f2);
//     printf("������ ���������� ���������!");

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    FILE *f2;

    if ((f2 = fopen("15-5-test.txt", "w")) == NULL)
    {
        printf("������ ������ �ʽ��ϴ�.\n");
        exit(1);
    }

    char a;
    while ((a = getc(stdin)) != EOF)
    {
        if (isalpha(a))
            if (islower(a))
                a = toupper(a);
            else if (isupper(a))
                a = tolower(a);
        putc(a, f2);
    }

    fclose(f2);
    printf("������ ���������� ���������!");

    return 0;
}