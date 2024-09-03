#include <stdio.h>

int main()
{
    // arithmetic operators

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ (increment)
    // -- (decrement)

    int x = 5;
    int y = 2;

    int z = x + y;
    printf("%d \n", z);

    z = x - y;
    printf("%d \n", z);

    z = x * y;
    printf("%d \n", z);

    int i = x / y;
    printf("%f \n", (float)i); // => 2.000000
    printf("%f \n", i);        //! => 0.000000 You have changed from int to float

    z = x % y;
    printf("%d \n", z);

    ++y; // 2 + 1
    printf("%d \n", y);

    --y; // 3 - 1ar
    
    printf("%d \n", y);
}