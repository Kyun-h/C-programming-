#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,sum=0;
    void *malloc(size_t size_t);
    void free(void*);
    int *score=NULL;
    double avg=0;


    printf("�Է��� ������ ������ �Է� >> ");
    scanf("%d",&n);

    if((score=(int *)malloc(sizeof(int)*n))==NULL){
        printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.\n");
        exit(1);
    }

    printf("%d���� ���� �Է� >> ",n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&score[i]);
        sum+=score[i];
    }

    printf("�Է� ����: ");

    for(int j=0;j<n;j++){
        printf("%d ",score[j]);
    }
    puts("");

    free(score);
    avg=(double)sum/n;
    
    printf("��: %d ���: %.1lf",sum,avg);

    return 0;
}