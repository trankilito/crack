#include<stdio.h>
#include<cs50.h>

int add(int a, int b);

int main(void)
{
    int a= get_int("Saisissez a svp: ");
    int b= get_int("Saisissez b svp: ");
    int c= add(a,b);

    printf("La somme de a et b est: %i.\n", c);
}
 int add(int a,int b)
    {
        return a+b;
    }