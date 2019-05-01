#include<stdio.h>
#include<cs50.h>

int main(void)
{
    long long ccnum;

    int c=0;

    do
    {
        // prompt for user input
        ccnum= get_long_long("Enter your credit card number: ");
    }
    while(ccnum<0);

    long long ccdigit = ccnum;

    while(ccdigit>0)
    {
        ccdigit = ccdigit/10;
        c++;
    }
    //chech if the card is
    if (c!=13 && c!=15 && c!=16)
    {
        printf("Sorry, your credit card is invalid.\n");
    }

    ccdigit = ccnum;

    int sum= 0;
    for(int i= 1;i < c; i++)
    {
        int dig= ccdigit%10;

        if(i%2==0)
        {
            dig= dig*2;
        }

        if(i%2!=0)
        {
            dig=dig*1;
        }

        if(dig>9)
        {
            dig=dig-9;
        }

        sum=sum+dig;
        ccdigit= ccdigit/10;
    }
    if (sum%10!=0)
    {
        printf("Sorry, your credit card is invalid.\n");
    }
    else
    {
        printf("Your credit card is valid.\n");
    }
    ccdigit= ccnum;
    while (ccdigit>100)
    {
        ccdigit=ccdigit/10;
    }

    int one= ccdigit;
    if ((one==34 || one==37) && (c==15))
    {
        printf("Your credit card is an AMEX.\n");
    }
    else if ((one>50 && one<56 && c==16))
    {
        printf("Your credit card is a Mastercard\n.");
    }
    else if((one /10==4) && (c==13 || c==16))
    {
        printf("Your credit card is a Visa.\n");
    }
    else
    {
        printf("Sorry, your credit card is either invalid or is from another bank.\n");
    }
}