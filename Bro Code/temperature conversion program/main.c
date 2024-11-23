#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("Is the temperature in (F) or (C): ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("Enter the temp in Celsius: ");
        scanf("%f", &temp);

        // temp = (temp * 9 / 5)  + 32;
        printf("the temp in fahrenheit is: %.1f \n", (temp * 9 / 5) + 32);
    }
    else if (unit == 'F')
    {
        printf("Enter the temp in fahrenheit: ");
        scanf("%f", &temp);

        // temp = ((temp - 32) * 5) / 9;
        printf("the temp in Celsius is: %.1f \n", ((temp - 32) * 5) / 9);
    }
    else
    {
        printf("%c is not a valid unit of measurement \n", unit);
    }
}