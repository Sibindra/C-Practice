#include <stdio.h>
#include <math.h>

int main()
{
    double b,p,h;

    printf("Enter the base of the right angled triangle:");
    scanf("%d",&b);

    printf("Enter the perpendicular of the right angled triangle:");
    scanf("%d",&p);

    h=sqrt((p*p)+(b*b));

    printf("The hypotenuse of the triangle is:%d",h);

    return 0;
}