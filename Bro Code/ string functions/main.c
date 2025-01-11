#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Bro";
    char string2[] = "Code";

    strlwr(string1); // converts a string to lowerc

    printf("%s \n", string1); //* => bro

    strupr(string1); // converts a string to uppercase

    printf("%s \n", string1);//* => BRO

    strcat(string1, string2); // appends string2 to end of string1

    printf("%s \n", string1);//* => BROCode

    strncat(string1, string2, 3); // appends n characters from string2 to string1

    printf("%s \n", string1);//* => BROCodeCod

    strcpy(string1, string2); // copy string2 to string1

    printf("%s \n", string1);//* => Code

    strncpy(string1, string2, 1); // copy n characters of string2 to string1

    printf("%s \n", string1);//* => Code
}