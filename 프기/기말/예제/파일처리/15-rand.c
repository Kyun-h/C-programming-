//0~99 ������ ��� 10�� ���� & �� ���

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int t,cnt=0;
    srand(time(NULL));
    
    FILE *f;
    if((f=fopen("numbers.txt","w"))==NULL){
        printf("������ ������ �ʾ� �����մϴ�.\n");
        exit(1);
    }

    for(int i=0; i<10;i++){
        t=rand()%100;
        fprintf(f,"%d\n",t);
        cnt+=t;

    }
    fclose(f);

    printf("%d",cnt);

    return 0;
}