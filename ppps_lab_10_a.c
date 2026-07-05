#include<stdio.h>
int main() {
    int x = 10;
    float y = 1.343;
    int *ptr;
    ptr = &x;
    float *pptr;
    pptr = &y;
    printf("Value is %d stored at %u",*ptr,ptr);
    printf("\nValue is %f stored at %u",*pptr,pptr);
}