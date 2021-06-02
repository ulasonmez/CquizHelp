#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("C = ");
    scanf("%d",&c);
    printf("D = ");
    scanf("%d",&d);
    //checks possibilites
    if(a==b && b==c && c== d){
        printf("It is a square");
    }
    else if (a == b && c == d)
        printf("it is a rectangle");
    else if (a == d && c == b)
        printf("it is a rectangle");
    else if (a == c && d == b)
        printf("it is a rectangle");
    else{
        printf("Not Square or Rectangle");
    }
    return 0;
}
