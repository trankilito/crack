#include <stdio.h>

#include <cs50.h>

#include <ctype.h>

#include <stdlib.h>

#include <string.h>


int main(int argc, string argv[])
{

    // check the number of argument passed by the user is two or not

    if (argc == 2)

    {

        //convert the argument from string to integer

        int key = atoi(argv[1]);

        string text = get_string("Please enter your text: ");



        //print out the ciphertext

        printf(" The Ciphertext is: ");



        //interate the number

        for (int i = 0, n = strlen(text); i < n ; i++)

        {

            //check wether the caracters are alphabetic

            if (isalpha(text[i]))

            {

                //check wether the caracters are upper

                if (isupper(text[i]))

                {
                    // print out the caracters step by step

                    printf("%c", (((text[i] - 'A') + key) % 26) + 'A');

                }



                //check weither the caracter is upper

                if (islower(text[i]))

                {

                    // print out the caracters step by step

                    printf("%c", (((text[i] - 'a') + key) % 26) + 'a');

                }

            }

            else

            {

                //print out the result in case the

                printf("%c", text[i]);

            }



        }

        printf("\n");

    }

    else

    {

        printf("You have to enter at least two argument here.\n");

    }



}