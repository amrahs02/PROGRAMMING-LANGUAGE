/*factorial using function number must be less than thirty two(32)*/
#include <stdio.h>
int fact(int);
int main()
{
    int n,x;
    printf("Enter the number: \n");
    scanf("%d",&n);
    x=fact(n);
    printf("factorial is %d",x);
}
int fact(int n)
{
    int i,facto=1;
    for(i=1;i<=n;i++)
    facto=facto*i;
    return (facto);
}
