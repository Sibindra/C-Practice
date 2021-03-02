#include <stdio.h>
#include <conio.h>

void main()
{
    char str[50];

    printf("Enter a string:");
    gets(str);

    printf("The string you entered is: %s",str);
    getch();
}