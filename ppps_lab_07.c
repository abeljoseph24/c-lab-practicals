#include<stdio.h>

int factorial(int n) {
    if (n==0 || n==1)
        return 1;
    else
        return n * factorial(n-1);
}

int fibonacci(int m) {
    if (m==0)
        return 0;
    if (m==1)
        return 1;
    else
        return fibonacci(m-1)+fibonacci(m-2);
}

int main() {
    int num1,num2;
    printf("Enter number you want to find factorial of: ");
    scanf("%d",&num1);
    printf("Factorial of %d is %d\n",num1,factorial(num1));

    printf("\nEnter n to find the nth fibonacci number: ");
    scanf("%d",&num2);
    printf("Answer is %d",fibonacci(num2-1));

    return 0;
}
