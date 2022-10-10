#include<stdio.h>
#define pi 3.14

// WAP of an Area of circle

int main () {
    int R;
    float A;

    printf("Enter the value of Radius of Circle =");
    scanf("%d",&R);

    A=pi*R*R;
    printf("Area of circle is %f having the Radius %d ",A,R);


    return 0;
}