#include <stdio.h>

int main()
{
    int rows;
    int columns;
    char symbol;

    printf("Enter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    printf("Enter a symbol to use: ");
    scanf("c", &symbol);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}
