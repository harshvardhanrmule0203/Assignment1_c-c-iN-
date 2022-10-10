#include<stdio.h>

//WAP to display dd mm yyyy

int main () {
    int a,b,c;
    printf("Write your DOB in the form DD/MM/YYYY =");
    scanf("%d/%d/%d",&a,&b,&c);
    printf("Date - %d, Month - %d,Year - %d",a,b,c);

    return 0;
}