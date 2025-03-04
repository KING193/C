#include <stdio.h>

int main()
{
	//? an arrays, where each element is an entire array
	//? useful if you need a matrix, grid, or table of date

	int numbers[2][3] = {
						{1, 2, 3},
						{4, 5, 6}
						};

	//you can use this two:

	int numbers_2[3][3];

	numbers_2[0][0] = 1;
	numbers_2[0][1] = 2;
	numbers_2[0][2] = 3;

	numbers_2[1][0] = 4;
	numbers_2[1][1] = 5;
	numbers_2[1][2] = 6;

	numbers_2[2][0] = 7;
	numbers_2[2][1] = 8;
	numbers_2[2][2] = 9;

	int rows = sizeof(numbers_2)/sizeof(numbers_2[0]);
	int columns = sizeof(numbers_2[0])/sizeof(numbers_2[0][0]);

	printf("rows: %d \n", rows);
	printf("columns: %d \n", columns);


	for(int i = 0; i < columns; i++)
	{
		for(int j = 0; j < rows; j++)
		{
			printf("%d ", numbers_2[i][j]);
		}
		printf("\n");
	}
}
