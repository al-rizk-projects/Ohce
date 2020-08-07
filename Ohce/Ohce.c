//Alex Rizk NID: al998687

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ohce.h"

double difficultyRating()
{
    return 2.0;
}

double hoursSpent()
{
    return 12;
}

int main(int argc, char **argv)
{
    //If there is no argument stop the program
    if (argc == 1)
    {
        return 0;
    }

    int i, k, j;
    int length;
    int echo = 0;

    //Prints strings in command line arguments in reverse order
    for (i = 1 ;i < argc; i++)
    {
        length = strlen(argv[i]);

        for (k = length - 1; k >= 0; k--)
        {
            printf("%c", argv[i][k]);
        }
        if (i < argc - 1)
        {
            printf(" ");
        }else{
            printf("\n");
        }
        //Echo function
        for (j = length - 1; j >= 0; j--)
        {
            if(argv[i][j] == 'o' || argv[i][j] == 'O')
            {

                if(argv[i][j-1] == 'h' || argv[i][j-1] == 'H')
                {

                    if(argv[i][j-2] == 'c' || argv[i][j-2] == 'C')
                    {

                        if(argv[i][j-3] == 'e' || argv[i][j-3] == 'E')
                        {
                            echo = 1;
                        }
                    }
                }
            }
                //terminates the echo loop if echo is found
                if(echo == 1)
                {
                    j = 0;
                }

        }
    }



    if(echo == 1)
    {
        printf("Echo, echo, echo!\n");
    }



        return 0;

}
