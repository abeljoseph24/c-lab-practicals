/* WACP to implement a simple calculator using switch-case for operations:
addition, subtraction, multiplication, and division */

#include<stdio.h>
int main(){
    float a,b;
    printf("Enter a = ");
    scanf("%f",&a);
    printf("Enter b = ");
    scanf("%f",&b);
    char choice;
    printf("Enter your choice value (+,-,*,/): ");
    scanf(" %c",&choice);

    switch(choice)
    {
        case '+': printf("Sum of a and b = %f",a+b);break;
        case '-': printf("Difference of a and b = %f",a-b);break;
        case '*': printf("Product of a and b = %f",a*b);break;
        case '/': printf("Quotient of a and b = %f",a/b);break;

        default : printf("Invalid Choice");
    }

    return 0;
}
