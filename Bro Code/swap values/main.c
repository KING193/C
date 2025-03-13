#include <stdio.h>
#include <string.h>

int main()
{
	char x = 'X';
	char y = 'Y';
	char temp;

	temp = x;   //temp = X
	x = y;      //x = Y
	y = temp;   //y = x

	printf("x = %c \n", x);
	printf("y = %c \n", y);

	//this part for string
	char f[] = "Whater";
	char h[] = "lemonade";

 	char temp_2[15]; //if you stile char temp_2[] you have error :)
	
	strcpy(temp_2, f);
	strcpy(f, h);
	strcpy(h, temp_2);

	printf("f = %s \n", f);
	printf("h = %s \n", h);
}