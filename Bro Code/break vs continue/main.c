#include <stdio.h>

int main()
{
	
	//? continue => skips rest of code & forces the next iteration of the loop
	//? break => exits a loop/switch
	
	for(int i; i <= 20; i++)
	{
		if(i == 13)
		{
			continue;
		}
		printf("%d \n", i);
	}

	for(int x; x <= 10; x++)
	{
		if(x == 6)
		{
			break;
		}
		printf("%d \n", x);
	}

}
