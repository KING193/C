#include <stdio.h>

int main()
{
    int x = 10;

    x = x + 2;
    x += 2;

    x = x - 3;
    x -= 3;

    x = x * 4;
    x *= 4;

    x = x / 5;
    x /= 5;
// / == % no difference
    x = x % 2;
    x %= 2;

    printf("%d \n", x);
}