#include<stdio.h>

int main () {
    int HH,MM;

    printf("Write down the time in the form of HH:MM =");
    scanf("%d:%d",&HH,&MM);
    printf("%d hour, %d minute",HH,MM);

    return 0;
}