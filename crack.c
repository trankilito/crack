#include <stdio.h>

#include <cs50.h>

#include <ctype.h>

#include <unistd.h>

#include <string.h>

#include<crypt.h>

#define _XOPEN_SOURCE

bool wear(string ghash);



int main (int argc, string argv[])
{
    //Making sure that the command line has more that 1 argument.
     if(argc != 2)
    {
    printf("Usage: ./crack ..... e.g: 50xcIMJ0y.RXo ;)");
    return 1;
    }

                if(!wear(argv[1]))
                return 1;

 // Open File
    FILE *fp = fopen("words", "r");
    if(fp == NULL)
    {
        printf("Failed to Open File...");
    }
}

bool wear(string ghash)
    {
        //letter counter
        const int n= 53;

string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";


char salt[3]; salt[0] = ghash[0]; salt[1] = ghash[1]; salt[2] = '\0';

/*memcpy(salt, ghash,2);*/


char key[5]= "\0\0\0\0\0";

//Found for each letter
{
        //if the password is just one letter
  for(int a= 0; a < n; a++)
  {
      key[0]= alphabet[a];
      key[1]='\0';
      string hash = crypt(key,salt);

      if(strcmp(hash, ghash) == 0)
      {
           printf("%s",key);
             return true;
      }
  }
        //if the password is two letters
        for(int b= 0; b < n; b++)
        {

        key[0]= alphabet[b];
     for(int c= 0; c < n; c++)
        {
             key[1]= alphabet[b];
             key[2]= '\0';
             string hash = crypt(key,salt);
                if(strcmp(hash, ghash) == 0)
                     {
                        printf("%s",key);
                              return 0;
      }
    }
  }
        //if the password is three letters
for(int d= 0; d < n; d++)
   {
        key[0]= alphabet[d];
     for(int e= 0; e < n; e++)
        {
             key[1]= alphabet[e];
        for(int f= 0; f < n; f++)
           {
             key[2]= alphabet[f];
             key[3]= '\0';
             string hash = crypt(key,salt);
                if(strcmp(hash, ghash) == 0)
                 {
                        printf("%s",key);
                              return true;
                 }
           }
        }
    }
        //if the password is four letters
for(int un= 0; un < n; un++)
   {
     key[0]= alphabet[un];

        for(int deux= 0; deux < n; deux++)
        {
            key[1]= alphabet[deux];

                for(int trois= 0; trois < n; trois++)
                {
                    key[2]= alphabet[trois];

                        for(int quatre= 0; quatre < n; quatre++)
                        {
                            key[3]= alphabet[quatre];

                            if(strcmp(hash, ghash)==0)
                            {
                                printf("%s",key);
                                return true;
                            }

                        }
                }
        }
   }

  }
}


