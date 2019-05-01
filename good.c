#include <stdio.h>
#include <cs50.h>

int main(void)
{
int a= get_int("Type a: ");
int b=10;
if(a>b)
{
printf("a is greater than b");
}
else if (a>b)
{
printf("b is geater than a");
}
else if (a==b)
{
printf("a is equal to b");
}
}