#include <stdio.h>

int main()
{

	double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

	printf("$%.2lf \n", prices[0]);
	
	for(int i = 1; i <= 4; i++)
	{
		printf("$%.2lf \n", prices[i]);
	}

	//! you can use this tow

	double list[5];

	list[0] = 1;
	list[1] = 2;
	list[2] = 3;
	list[3] = 4;
	list[4] = 5;

	printf("%d bytes \n", sizeof(list));

	//! and you can use this loop
	
	for(int i = 0; i < sizeof(list)/sizeof(list[0]); i++)
	{
		printf("$%.2lf \n", list[i]);
	}

}
