#include <stdio.h>
#include <conio.h>

int main(){
    char c;

    printf("Enter a character: ");
    c=_getch(); //_getche => �Է¹����� �ٷ� ���� , _getch => �Է� ���ߴ��� �� ����
    
    printf("\nYou entered: %c\n",c);
    
    return 0;
}