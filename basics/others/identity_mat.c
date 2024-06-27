#include<stdio.h>
#include<stdlib.h>

int TICKED_ID;

int main(){
    printf("Hello world\n");
    //! task is to take input from user and print the identity matrix of that order
    int n;
    printf("Enter the n for identity matrix = ");
    scanf("%d",&n);
    printf("n = %d\n",n);
    int **arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n + 1; i++) {
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    int l = sizeof(arr)/sizeof(arr[0]);

    TICKED_ID = 333;
    printf("TICKED_ID = %D",TICKED_ID);

    // creating identity matrix
    // putting zeros in every rows and columns
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            arr[i][j] = 0;
        }
    }

    // making it idebntity matrix by putting one's in diagonal

    for(int i = 0;i<n;i++){
        for(int j = i;j<i+1;j++){
            arr[i][j] = 1;
        }
    }

    // utitlity for printing array
    for(int i = 0;i<n;i++){
        printf("|");
        for(int j = 0;j<n;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("|");
        printf("\n");
    }
    // lower triangular identity matrix: a identity matrix in which elements above principal diagonal is zero
    // for(int i = 0;i<n;i++){
    //     for(int j = i;j<i+1;j++){
    //         for(int k = i;k<n;k++){
    //             arr[k][j] = 1;
    //         }
    //     }
    // }
    // printf("printing lower triangular identity matrix...\n");
    // for(int i = 0;i<n;i++){
    //     printf("|");
    //     for(int j = 0;j<n;j++){
    //         printf(" %d ",arr[i][j]);
    //     }
    //     printf("|");
    //     printf("\n");
    // }
    //! ---------------------------------- Upper Triangular matrix -----------------------------------------------
    //! An upper triangular matrix is a square matrix, whose all elements below the principal diagonal are zeros.

    for(int i = 0;i<n;i++){
        for(int j = i;j<i+1;j++){
            for(int k = j;k<n;k++){
                arr[i][k] = 1;
            }
        }
    }

    printf("printing upper triangular identity matrix...\n");
    for(int i = 0;i<n;i++){
        printf("|");
        for(int j = 0;j<n;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("|");
        printf("\n");
    }
}