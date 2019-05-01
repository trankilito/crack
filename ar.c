#include<stdio.h>
#include<cs50.h>

int main (void)
{
int array[11]= {2,2,7,};

for(int i= 3; i < 11; i++)
{
  array[i]=get_int("Enter: ");
}
for(int o= 0;o < 11; o++)
{
  printf("%i",array[o]);
}
printf("\n");
}