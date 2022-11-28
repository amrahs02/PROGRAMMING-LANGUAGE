#include<stdio.h>
main () {
    int a,b,sub,mul,sum,quo;
    char opr;
    printf ("Enter the operator\n");
    scanf ("%c",&opr);
    printf("Now ,Enter the numbers:\n");
    scanf ("%d %d",&a,&b);
    switch (opr) {

        case '+':
        sum = a + b ;
        printf("The addition is %d ",sum);
        break;
        case '-' :
        sub = a-b;
        printf ("The subtraction is %d ",sub);
        break;
        case '*' :
        mul = a*b ;
        printf ("The multiplication is %d ",mul);
        break ;
        case '/' :
        quo = a/b;
        printf ("The quotien is %d",quo);++
        break ;
        default :
        printf ("wrong choice");
    } 
}