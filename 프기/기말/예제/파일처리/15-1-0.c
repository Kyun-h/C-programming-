#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* f;
    if((f=fopen("myinfo.txt","w"))==NULL){
        printf("������ ������ �ʽ��ϴ�.\n");
        exit(1);
    }

    fprintf(f,"��ȭ��ȣ: 010=3018-3824, �ּ�: ���ʱ� ������ 557, ����: 22\n");
    fclose(f);

    return 0;
}