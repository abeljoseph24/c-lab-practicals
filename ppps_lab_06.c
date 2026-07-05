#include<stdio.h>

int main() {
    char str1[100],str2[100],concat[200],copy[200];
    int i,j,flag=0;

    printf("Enter first string: ");
    scanf("%s",&str1);
    printf("Enter second string: ");
    scanf("%s",&str2);

    //compare the two strings
    for (i=0;str1[i]!='\0' || str2[i]!='\0';i++) {
        if (str1[i]!=str2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Strings are equal.");
    else
        printf("Strings are not equal.");

    //concatenate the two strings
    for (i=0;str1[i]!='\0';i++)
        concat[i] = str1[i];
    for (j=0;str2[j]!='\0';j++,i++)
        concat[i] = str2[j];
    concat[i] = '\0';
    printf("\nConcatenated string is: %s\n",concat);

    //copy first string into another variable
    for (i=0;str1[i]!='\0';i++)
        copy[i]=str1[i];
    copy[i]='\0';
    printf("Copied string: %s\n", copy);

    return 0;
}
