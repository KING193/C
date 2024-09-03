#include <stdio.h>

int main()
{
	const double PI = 3.14159;
	double redius;

	printf("Enter the radius of a circle: ");
	scanf("%lf", &redius);

	double circumference = 2 * PI * redius;
	double area = PI * redius * redius;

	printf("circumference: %lf \n", circumference);
	printf("area: %lf \n", area);
}
