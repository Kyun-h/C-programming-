#include <stdio.h>

int main(void){
    int i=100;
    char c='A';

    int *pi=&i;
    char *pc=&c;
    printf("�������� ���: %d %c\n",*pi,*pc);

    *pi=200;
    *pc='B';
    printf("�������� ���: %d %c\n",i,c);

    return 0;
}