#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool sunny = false;
    int num = 5;

    if (!sunny && num != 6)
    {
        printf("It's sunny outside! \n");
    }
    else
    {
        printf("It's cloudy outside! \n");
    }
}