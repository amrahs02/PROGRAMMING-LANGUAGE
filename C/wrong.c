#include<stdio.h>
add ();
subt ();
mul ();
int a,b;
int main () {
    switch (opr) {
        case '+' :
        add ()
        break;
        case '-' :
        subt ()
        break;
        case '*' :
        mul ()
        break;
        default :
        printf ("Wrong Choice");
    }
}
add() {
    sum = a+b;
    printf ("The sum is %d",sum);
}
subt () {
    sub = a-b;
    printf ("The sub is %d",sub);
}
mul () {
    mul = a*b;
    printf ("The mul is %d",mul);
}
