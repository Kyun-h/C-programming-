#include <stdio.h>
#include <string.h>

struct account
{
    char name[12];
    int actnum;
    double balance;
};

int main(void)
{
    struct account mine = {"ȫ�浿",1001,30000};
    struct account yours;
    scanf("%s",&yours.name);
    scanf("%d",&yours.actnum);
    scanf("%lf",&yours.balance);

    printf("����ü ũ��: %zu\n",sizeof(mine));
    printf("%s %d %.2lf\n",yours.name,yours.actnum,yours.balance);

    return 0;
}