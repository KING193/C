#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Your are now signed up! \n");
    }
    else if (age == 0)
    {
        printf("You can't sign up! You were just born! \n");
    }
    
    else if (age < 0)
    {
        printf("You haven't been born yet! \n");
    }
    
    else
    {
        printf("You are too young to sign up! \n");
    }
}