//9. Write a program to print cubes of the first 10 natural numbers.
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("\n%d=%d",i,i*i*i);
    }
    return 0;
}