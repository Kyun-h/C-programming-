//������ ������ ������ ���ȣ �ٿ��� ���

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *f;
    if((f=fopen("15-5.c","r"))==NULL){
        printf("������ ������ �ʽ��ϴ�.\n");
        exit(1);
    }

    int ch,cnt=0;
    printf("%4d: ",++cnt);
    while((ch=fgetc(f))!=EOF){
        putchar(ch);
        if(ch=='\n') printf("%4d: ",++cnt);
    }
    printf("\n");
    fclose(f);

    return 0;
}