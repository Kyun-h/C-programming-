#include <stdio.h>

int main(void){
    char name[20],dept[30];
    int snum;
    printf("�й� �̸� �а� �Է� >>\n");
    scanf("%d %s %s",&snum,dept,name);
    printf("���: %d %s %s\n",snum,dept,name);

    char line[101];
    printf("�� �࿡ �й� �̸� �а� �Է��� �� [enter]�� ������ ");
    printf("���ο� �࿡�� (ctrl + Z)�� �����ʽÿ�.\n");

    while(gets(line))
        puts(line);
    puts("");

    while(gets_s(line,101))
        puts(line);
    puts("");

    return 0;
}