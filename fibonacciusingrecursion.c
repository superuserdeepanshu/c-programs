//Program for Factorial using Recursion
#include<stdio.h>
#include<stdlib.h>
int series(int);
int main(){
    int x,n;
    printf("\nEnter Limit:");
    scanf("%d",&n);
    series(n);
    return 0;
}
int series(int n)//Recursive Function
{
    static int a=-1,b=1,c;
    if(n==0)
        return 0;
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
    series(n-1);
}