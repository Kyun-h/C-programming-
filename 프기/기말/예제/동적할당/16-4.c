#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows = 3;
    int cols = 4;
    int i, j;

    int **array = (int **)malloc(rows * sizeof(int *));

    if (array == NULL)
    {
        fprintf(stderr, "Memory allocation failed for ows\n");
        return 1;
    }

    for (i = 0; i < rows; i++)
        array[i] = (int *)malloc(cols * sizeof(int));

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            array[i][j] = i * cols + j;
    }
    printf("2D Array Elements: \n");
    for(i=0; i<rows;i++){
        for(j=0;j<cols;j++)
            printf("%d ",array[i][j]);
    }
    puts("");
    
    //�޸� ����
    for(int i=0;i<rows;i++)
        free(array[i]); //�� �� ������
    free(array); // ������ �迭 ������

    return 0;
}