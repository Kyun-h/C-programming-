#include <stdio.h>
#include <string.h>

int main(void){
    char str[]="JAVA 2022 Puthon C";
    printf("%zu\n",strlen("python"));
    printf("%s, ",_strlwr(str));
    printf("%s\n", _strupr(str));

    printf("%s, ",strstr(str,"VA"));
    printf("%s\n",strchr(str,'A'));

    return 0;
}