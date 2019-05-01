#include<stdio.h>
#include<cs50.h>

int ops(int first, int second,int qU);

int main (void)
{
    int first= 0;
    int second= 0;
    int result= ops;
    int qU= 2;
    do
    {
    int qU= 2;
    int first= get_int ("Enter a number: ");
    int second= get_int ("Enter a number: ");
    int result= ops (first,second,qU);

    printf("The result is %i\n", result);
    }
    while(first< 0 || second< 0);



}

int ops(int first, int second, int qU)
{
     int v= first+second;
     return v/qU;

}