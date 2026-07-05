#include<stdio.h>
void main() {
    int n;
    int i;
    printf("Enter number of elements you want in the array: ");
    scanf("%d",&n);

    int arr[n];

    for (i=0;i<n;i++) {
        printf("Enter element %d of your array: ",i+1);
        scanf("%d",&arr[i]);
    }

    int j,k;
    int min,max;
    float sum = 0.0,avg;
    min = arr[0];
    max = arr[0];
    for (j=1;j<n;j++) {
        if (arr[j]<min)
            min = arr[j];
        if (arr[j]>max)
            max = arr[j];
    }

    for (k=0;k<n;k++) {
        sum = sum + arr[k];
    }

    avg = sum/n;
    printf("Minimum is %d",min);
    printf("\nMaximum is %d",max);
    printf("\nSum is %f",sum);
    printf("\nAverage is %f",avg);
}