#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
    string name= get_string("Name: ");

    for(int i= 0;i<strlen(name);i++)
    {
        printf("%c",toupper(name[i]));
    }
}