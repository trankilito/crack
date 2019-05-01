#include<stdio.h>
#include<cs50.h>

void swap (int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main (void)
{
    int a= 2;
    int b= 4;

    printf("B is equal to %i.", b);
}