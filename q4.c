//Write a program to swap values of two int variables without using a third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers : ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping %d %d",a,b);
    return 0;
    
}