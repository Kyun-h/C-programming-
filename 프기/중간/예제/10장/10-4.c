#include <stdio.h>

void reset(void);
void count(void);

int main () {
    for (int i = 1; i <= 5; i++) {
        reset();
        count();
    }
}

void reset(void)
{
    auto int n = 1;
    printf("�ڵ� �������� n: %2d\n", n);
    n++;
}

void count(void) {
    static int s = 10;
    printf("\t���� �������� s: %2d\n", s);
    s++;
}