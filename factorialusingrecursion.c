//Program for Factorial using Recursion
#include<stdio.h>
#include<stdlib.h>
int factorial(int);
int main(){
    int x,n;
    printf("\nEnter Number:");
    scanf("%d",&n);
    x=factorial(n);
    printf("\nFactorial of %d is %d",n,x);
    return 0;
}
int factorial(int n)//Recursive Function
{
    static int f=1;
    if(n==0)
        return f;
    f=f*n;
    factorial(n-1);
}