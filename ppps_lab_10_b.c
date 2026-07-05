#include<stdio.h>
int main() {
    int i;
    int arr[5] = {10,20,30,40,50};
    int *ptr;
    ptr = &arr;
    for (i=0;i<5;i++) {
        printf("%d\n",*(ptr+i));
    }
    printf("%d\n",*ptr++);
    printf("%d\n",*ptr);
    printf("%d\n",*ptr--);
    printf("%d",*ptr);

    return 0;
}