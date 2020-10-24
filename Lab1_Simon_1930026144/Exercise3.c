/**
* Exercise2.c
* @author Simon
* @description 

Write a C program to convert an integer into binary form using 2’s
complement and print the result.

* @created 2020-10-20T14:40:38.898Z+08:00
* @copyright None 
* None
* @last-modified 2020-10-24T09:35:05.072Z+08:00
*/

#include <stdio.h>
#define SIZE 20
int main(int argc, char const *argv[])
{
    int number = 128;
    int count = 0;
    int sign = '+';
    int str[SIZE];

    if (number < 0)
    {
        /* gie=ve the number a sign */
        number = -number;
        sign = '-';
    }

    while (number != 0)
    {
        /* code */
        str[count] = number % 2;
        number /= 2;
        count++;
    }
    str[count] = 1;
    count++;
    while (count < 16)
    {
        /* code */
        str[count] = 0;
    }
    if (sign == '-')
    {
        /* code */
        for (int i = 0; i < 16; i++)
        {
            /* code */
            if (str[i] == 0)
            {
                /* code */
                str[i] = 1;
            } else
            {
                /* code */
                str[i] = 0;
            }
        }

        for (int j = 0; 1; j++)
        {
            /* code */
            if (str[j] == 0)
            {
                /* code */
                str[j] = 1;
                break;
            } else
            {
                /* code */
                str[j] = 0;
            }
            
            
        }
        
        
        
    }

    for (int f = 15; f > 0; f--)
    {
        /* code */
        printf("%d", str[f]);
    }
    
    printf("\n");
    
    
    return 0;
}
