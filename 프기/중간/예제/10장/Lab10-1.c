#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define MAX 100

int guess;

int main () {
    int input;

    srand((long)time(NULL));
    guess = rand() % MAX + 1;

    printf("1���� %d ���̿��� �� ������ �����Ǿ����ϴ�.\n", MAX);
    printf("�� ������ �����ϱ��? �Է��� ������. : ");
    
    while (scanf("%d", &input)) {
        switch (testNum(input)) {
            case 0:
                puts("�����Դϴ�.");
                break;
            case -1:
                printf("�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ���. : ");
                break;
            case 1:
                printf("�Է��� ������ Ů�ϴ�. �ٽ� �Է��ϼ���. : ");
                break;
        }
    }

    return 0;
}

int testNum(int input) {
    extern guess;

    int result = 0;
    if (input > guess)
        result = -1;
    else if (input < guess)
        result = 1;
    else
        result = 0;
    
    return result;
}