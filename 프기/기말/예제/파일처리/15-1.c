#include <stdio.h>
#include <stdlib.h>

int main(void){
    char* fname = "basic.txt";
    FILE* f;

    if((f=fopen(fname,"w"))==NULL){
        printf("������ ������ �ʾ� �����մϴ�.\n");
        exit(1);
    };

    fprintf(f,"�̸� ������ �л��� ������ 99�Դϴ�.\n");
    fclose(f);

    return 0;
}