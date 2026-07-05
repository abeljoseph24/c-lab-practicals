#include <stdio.h>

void show_matrix(int r, int c, int matrix_[r][c]) {
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++)
            printf("%d ",matrix_[i][j]);
        printf("\n");
    }
}

int main() {
    int r,c;
    printf("Enter No. of Rows: ");
    scanf("%d",&r);
    printf("Enter No. of Columns: ");
    scanf("%d",&c);

    int matrix_1[r][c], matrix_2[r][c], sum_matrix[r][c], transpose_of_sum[c][r];

    // matrix 1
    printf("Enter elements of matrix 1:\n");
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++)
            scanf("%d",&matrix_1[i][j]);
    }

    //matrix 2
    printf("Enter elements of matrix 2:\n");
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++)
            scanf("%d",&matrix_2[i][j]);

    }

    //displaying matrix 1 and 2
    printf("Matrix 1\n");
    show_matrix(r,c,matrix_1);

    printf("Matrix 2\n");
    show_matrix(r,c,matrix_2);

    //calculating sum matrix
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++)
            sum_matrix[i][j] = matrix_1[i][j]+matrix_2[i][j];
    }

    //displaying sum matrix
    printf("Below given is the sum matrix\n");
    show_matrix(r,c,sum_matrix);

    //taking transpose of sum matrix
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++)
            transpose_of_sum[j][i]=sum_matrix[i][j];
    }

    //displaying transpose of sum matrix
    printf("Below given is the transpose of sum matrix\n");
    show_matrix(c,r,transpose_of_sum);

    return 0;
}
