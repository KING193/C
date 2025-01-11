#include <stdio.h>

void birthdat(char x[], int y)
{
    printf("Happy birthday dear %s! \n", x);
    printf("You are %d years old! \n", y);
}

int main()
{
    char name[] = "Simo";
    int age = 18;

    birthdat(name , age);
}