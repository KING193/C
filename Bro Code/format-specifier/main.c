#include <stdio.h>

int main()
{
    // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.57;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%.2f \n", item1);
    printf("Item 2: $%1f \n", item2);
    printf("Item 3: $%-f \n", item3);

    printf("\n");

    char name_item[] = "door pro";

    printf("Item 4: $%8.2f \n", item1);
    printf("Item 5: %-8.2f $\n", item2);
    printf("Item 6: $%-f \n", item3);

    printf("Name Item: %.4s \n", name_item);// from door pro to door
}