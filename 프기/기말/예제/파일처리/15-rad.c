#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *f;
    if((f=fopen("grade.txt","w"))==NULL){
        printf("������ ������ �ʾ� �����մϴ�.\n");
        exit(1);
    }

    char name[10];
    int grade_j,grade_g,cnt=0;
    printf("�̸��� ����(�߰�, �⸻)�� �Է��ϼ���.\n");
    scanf("%s %d %d",name,&grade_j,&grade_g);

    fprintf(f,"1 %s %d %d",name,grade_j,grade_g);
    fclose(f);

    FILE* f2;
    f2=fopen("grade.txt","r");
    if(f2==NULL){
        printf("������ ������ �ʽ��ϴ�.\n");
        exit(1);
    }

    printf("��ȣ        �̸�    �߰�    �⸻");

    fscanf(f2,"%s\t\t%d\t%d\n",name,10,&grade_j,&grade_g);
    fclose(f2);

    printf("\n1\t\t%s\t%d\t%d", name, grade_j,grade_g);


    return 0;
}