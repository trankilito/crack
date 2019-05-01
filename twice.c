#include<stdio.h>
#include<cs50.h>

    int main (void)
{
    int array[10];

    for(int g=0; g < 10; g++)
    {
    array[g]=get_int("Enter the numbers: ");
    }

    int add,mul;
    add=0;
    mul= array[0];

    int *a;
    int *b;
    a= &add;
    b= &mul;

    for(int i= 0; i < 10; i++)
    {

            *a= *a + array[i];
            *b= *b * array[i];
    }

    printf("The sum of all array's elements is %i and its product is %i.\n", add, mul);
}