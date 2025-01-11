#include <stdio.h>

void hello(char[], int);//* function prototype

int main()
{
    char name[] = "leon";
    int age = 17;

    hello(name, age);
}

void hello(char name[], int age)
{
    printf("Hello %s \n", name);
    printf("You are %d years old \n", age);
}