#include <stdio.h>

double sum(double data[][2], int, int);
void printarray(double data[][2], int, int);

int main(void)
{
    double x[][2] = {{11, 12}, {21, 22}, {31, 32}};

    int rowsize = sizeof(x)/sizeof(x[0]);
    int colsize = sizeof(x[0])/sizeof(x[0][0]);
    printf("2���� �迭�� �ڷᰪ�� ������ �����ϴ�.\n");
    printarray(x,rowsize,colsize);
    printf("2���� �迭 �������� %.3lf �Դϴ�.\n",sum(x,rowsize,colsize));

    return 0;
}

double sum(double data[][2], int rowsize, int colsize){
    double total=0;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++) total +=data[i][j];
    }
    return total;
}

void printarray(double data[][2], int rowsize, int colsize){
    for (int i=0;i<rowsize;i++){
        printf("%d�����: ",i+1);
        for(int j=0;j<colsize;j++){
            printf("x[%d][%d] = %5.2lf",i,j,data[i][j]);
        }
        puts("");
    }
    puts("");

}
