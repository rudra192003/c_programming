// write a program to print fibonacci series for n terms (according to the give input)(13 April 2025)
#include<stdio.h>
int main()
{
    int number,nextterm,a=0,b=1;
    printf("\n enter a number to print fibonnaci series :");
    scanf("%d",&number);
    printf("%d,%d",a,b);
    for (int i=2; i<number;i++)
    {
        nextterm=a+b;
        a=b;
        b=nextterm;
        printf(",%d",nextterm);
    }
    return 0;
}