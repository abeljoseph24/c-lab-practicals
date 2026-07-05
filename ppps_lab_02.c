// WACP to compare 2 numbers entered by the user
#include<stdio.h>
int main() {
    int x,y;
    printf("Enter No.1: ");
    scanf("%d",&x);
    printf("Enter No.2: ");
    scanf("%d",&y);

    if (x!=y) {
        if (x>y)
            printf("%d is greater than %d\n",x,y);
        else
            printf("%d is greater than %d\n",y,x);
    }
    else
        printf("Both numbers are equal\n");

// checking whether one number is divisible by the other

    if (x==0 && y==0) {
        printf("Cannot perform division!\n");
    }

    else {
        if (x!=y) {
            if (y!=0 && x%y==0) {
                printf("%d is divisible by %d\n",x,y);
            }
            else {
                printf("%d is not divisible by %d\n",x,y);
            }

            if (x!=0 && y%x==0) {
                printf("%d is divisible by %d\n",y,x);
            }
            else {
                printf("%d is not divisible by %d\n",y,x);
            }
        }
        else {
            printf("%d is divisible by %d\n",x,y);
        }
    }

    return 0;
}
