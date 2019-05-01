#include<stdio.h>
#include<cs50.h>

int main(void)

{
 int n = get_int ("Please type the amount of money: ");



int a = 500;
int b = 250;
int c = 200;
int d = 100;
int e = 50;
int f = 25;
int g = 5;
int h = 1;
int i = 0;


    while(n>=a)
    {
        n = n-a;
        i++;
    }
    while(n>=b)
    {
        n = n-b;
        i++;
    }
    while(n>=c)
    {
        n = n-c;
        i++;
    }
     while(n>=d)
    {
        n = n-d;
        i++;
    }
     while(n>=e)
    {
        n = n-e;
        i++;
    }
     while(n>=f)
    {
        n = n-f;
        i++;
    }
     while(n>=g)
    {
        n = n-g;
        i++;
    }
     while(n>=h)
    {
        n = n-h;
        i++;
    }

    printf("The number of coins used is %i !!!\n", i);
 }

