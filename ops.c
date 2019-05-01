#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int add, product, array[10];

    for(int i= 0;i < 10; i++)
    {
        array[i]= get_int("Please enter the numbers: ");
    }

    for(int e= 0;e< 10;e++)
    {
     for(int a= 1;a<= 10;a++)
        {
        add= array[e] + array[a];

        product= array[e] * array[a];
        }
    }

    printf("The sum of all elements is %i and the product is %i.\n", add, product);
}