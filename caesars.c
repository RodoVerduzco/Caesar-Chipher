/*************************************************************************
* This is a program that uses the Caesar's cipher algorithm for
* Information Security class
*
* Rodolfo Verduzco Torres
* Ma. Fernanda Delgado Radillo
*
* The program expects a message to be ciphred
*and a numerical key  that will act as the shift indicator for the ciphering
*
* Expected output: The ciphred message using the indicated shift(key)
*
* To compile this program use gcc filename.c on command prompt
*
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  //indicates possible length of message and type
    char toEncrypt[100];
    char str;
//counter and key numerical declaration
    int i;
    int key;
//Message showed to user in command prompt and getting input from keyboard
    printf("Original Message: \n");
    gets(toEncrypt);
    printf("\n");
    printf("Key: \n");
    scanf("%d", &key);
    printf("\n");
    //Initialize counter and start cycle to explore each character of the message
    for(i = 0; toEncrypt[i] != '\0'; ++i)
    {
        str = toEncrypt[i];
        //For letters between a-z
        if(str >= 'a' && str <= 'z')
        {
          //shifts [character] "key" times
            str = str + key;
            //shifts forward z so it starts as it was backwards(difference)
            if(str > 'z')
            {
                str = str - 'z' + 'a' - 1;
            }

            toEncrypt[i] = str;
        }
        //For letters between a-z MAYUS
        else
            if(str >= 'A' && str <= 'Z')
            {
              str = str + key;

                if(str > 'Z')
                {
                  str = str - 'Z' + 'A' - 1;
                }

            toEncrypt[i] = str;
        }
    }
    printf("Caesar's ciphred message is: %s\n", toEncrypt);
    return 0;
}
