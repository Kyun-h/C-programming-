#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    FILE *f;
    if((f=fopen("f2.txt","r"))==NULL){
        printf("������ n������ �ʽ��ϴ�.\n");
        exit(1);
    }

    printf("90�� �̻�:\n");
    int jum,cnt=0;
    while(fscanf(f,"%d",&jum) == 1) {
        if(jum>=90){
            cnt++;
            printf("%d\n",jum);
        }
    }
    printf("����:\n");
    printf("%d",cnt);


    return 0;
}