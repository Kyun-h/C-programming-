#include <stdio.h>
#include <string.h>

int main(void){
    char str[]="C and C++\t languages are best!";
    char *delimiter = " !\t";

    printf("���ڿ� \"%s\"�� >>\n",str);
    printf("������[%s]�� �̿��Ͽ� ��ū�� ���� >>\n",delimiter);

    char* ptoken=strtok(str,delimiter);

    while(ptoken){
        printf("%s\n",ptoken);
        ptoken=strtok(NULL,delimiter);
    }

    return 0;
}