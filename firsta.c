// write a code to calculate the GCD of the two numbers 
#include<stdio.h>
int gcd (int p, int q)
{
    if (p==0)
    {
        return q;
    }
    if(q==0)
    {
        return p;
    }
    if(p==q)
    {
        return p;
    }
    if(p>q)
    {
        return gcd(q,p-q);
    }
    else 
    {
        return gcd(p,q-p);
    }
}
int main()
{
    int p,q;
    printf("\n enter the value of the p: ");
    scanf("%d",&p);
    printf("\n enter the value of the q: ");
    scanf("%d",&q);
    printf("\n the value we get is %d and %d is %d",p,q,gcd(p,q));
    return 0;
}