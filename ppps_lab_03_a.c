// WACP that prints the multiplication table of a given number using a for loop

#include<stdio.h>
int main() {
    int n;
    int i;
    printf("Enter any number: ");
    scanf("%d",&n);

    for (i=1;i<=10;i++) {
         printf("\n%d * %d = %d",n,i,n*i);
    }

    return 0;
}