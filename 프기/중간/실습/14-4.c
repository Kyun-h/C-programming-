#include <stdio.h>

void printBin(int a);
void printFloatBin(double a);

int main(void) {
    double n;
    while (1) {
        scanf("%lf", &n);
        if (n == 0) break;

        int integerPart = (int)n; //�����κ�
        double fractionalPart = n - integerPart; //�Ҽ��κ�

        // ���� �κ� ���
        if (integerPart == 0) {
            printf("0");
        } else {
            printBin(integerPart);
        }

        // �Ҽ��� ���
        printf(".");

        // �Ҽ��� ���� �κ� ���
        printFloatBin(fractionalPart);

        printf("\n");
    }

    return 0;
}

void printBin(int a) {
    if (a > 1) {
        printBin(a / 2);
    }
    printf("%d", a % 2);
}

void printFloatBin(double a) {
    int count = 0;
    int hasFraction = 0; // �Ҽ��� ���� �κ��� �ִ��� Ȯ���ϴ� �÷���

    while (count < 10 && a > 0) {
        a *= 2;
        int bit = (int)a;
        printf("%d", bit);
        a -= bit;
        count++;
        hasFraction = 1; // �Ҽ��� ���� �κ��� �ִ� ��� �÷��� ����
    }

    // �Ҽ��� ���� �κ��� ���� ��� 0 ���
    if (!hasFraction) {
        printf("0");
    }
}