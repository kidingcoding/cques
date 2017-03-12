#include<cs50.h>
#include<stdio.h>
int main()
{
    
    printf("Minutes:");
    int m=get_int();
    int b;
    b=m*12;
    printf("Bottles:%d",b);
}