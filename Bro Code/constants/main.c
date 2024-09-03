#include <stdio.h>

int main()
{
    // constants = fixed value that cannot be altered by the program its execution

    float pi = 3.14159;

    pi = 87.43324;

    printf("%.5f \n", pi);

    const float la = 3.14159;

    //! la = 76.89875; error

    printf("%.5f \n", la);
}