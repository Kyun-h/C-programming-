#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *f;
    if((f=fopen("f1.txt","r"))==NULL){
        printf("������ ������ �ʽ��ϴ�.");
        exit(1);
    }

    int ch;
    while((ch=fgetc(f))!=EOF){
        putchar(ch);
    }
    printf("\n");
    fclose(f);

    return 0;
}