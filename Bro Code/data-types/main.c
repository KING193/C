#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'C';     //? single character %c
    char b[] = "Bro"; //? array of character %s

    float c = 3.141592;         //? 4 bytes (32 bits of precison) 6 - 7 digits %f
    double d = 3.1415927268232; //? 8 bytes (64 bits of precison) 15 - 16 digits %lf

    bool e = true; //? 1 bytes (true or false) %d

    char f = 36;           //? 1 bytes (-128 to +127) %d or %c
    unsigned char g = 255; //? 1 bbytes (0 to +255) %d or %c

    short h = 32767;          //? 2 bytes (-32,768 to +32,767) %d
    unsigned short i = 65535; //? 2 bytes (0 to +65,535) %d

    int j = 2147483647;         //? 4 bytes (-2,147,483,648 to 2,147,483,647) %d
    unsigned int k = 494967295; //? 4 bytes (0 to 4,294,483,647) %u

    long long int l = 9223372036854775807;            //? 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; //? 8 bytes (0 to +18 quintillion) %llu

    // printf for variable

    printf("%c \n", a); //* char
    printf("%s \n", b); //* array character

    // printf("%0.15f \n", c); => 3.141592025756836
    printf("%0.6f \n", c);   //* float
    printf("%0.15lf \n", d); //* double

    printf("%d \n", e); //* bool ; 1 is true and 0 false

    printf("%c \n", f); // %c => ASCII TABLE => $
    printf("%d \n", f); //* char as numeric value
    printf("%d \n", g); //* unsigned char

    printf("%d \n", h); //* short
    printf("%d \n", i); //* unsigned short

    printf("%d \n", j); //* int
    printf("%d \n", k); //* unsigned int

    printf("%lld \n", l); //* long long int
    printf("%llu \n", m); //* unsigned long long int
}
//history