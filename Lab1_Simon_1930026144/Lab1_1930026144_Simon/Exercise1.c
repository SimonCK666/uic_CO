/**
* Exercise.c
* @author Simon
* @description 

1. Write a C program to explore how the string “你好”, positive number “100”
and negative number “-100” in type int, real number “-62.125” in both float and double types
and char ‘x’ are represented in the computer memory. Print out both the addresses and values of
each variable in hexadecimal. 


* @created 2020-10-20T14:18:53.776Z+08:00
* @copyright None 
* None
* @last-modified 2020-10-24T09:34:33.504Z+08:00
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char helloStr[] = "你好";
    int a = 100, b = -100;
    float num = -62.125;
    double num2 = -62.125;
    char c = 'x';
    
    printf("%s\n", helloStr);
    printf("positive number: %d negative number: %d\n", a, b);
    printf("Float: %f\t Double: %f\n", num, num2);
    printf("Address: %p\t Value: %x\n", &c, c);
    
    return 0;
}
