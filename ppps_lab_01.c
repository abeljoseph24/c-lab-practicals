// WACP to calculate area and perimeter of a rectangle by taking input from user
#include<stdio.h>
// definition of function main
int main()
{
    float l, b, area, perimeter;

    printf("Enter length: ");
    scanf("%f", &l);

    printf("Enter breadth: ");
    scanf("%f", &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
