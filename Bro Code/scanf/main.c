#include <stdio.h>
#include <string.h>

int main()
{

    char name[25]; // bytes
    int age;

    printf("what's your name: ");
    scanf("%s", &name);

    printf("How  old are you: ");
    scanf("%d", &age);

    printf("Hello %s \n", name);
    printf("your age is %d \n", age);

    // ues fgets:

    getchar(); //*I added getchar() after scanf to read the remaining new character in the input, ensuring that fgets work correctly

    char name2[25];

    printf("what's your last an frest name: ");
    fgets(name2, 25, stdin);

    name2[strlen(name2) - 1] = '\0'; // for remove atue \n

    printf("hi %s", name2);
    printf("\n");

    char name3[25];

    printf("what's your last and frest name and name school: ");
    fgets(name3, 25, stdin); //

    printf("your name and name school: %s", name3);

    //! fgets(age, 25, stdin); you can use fgets just in char
}
