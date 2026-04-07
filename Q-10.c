#include <stdio.h>

//specify the column size for 2D array parameters
void rev(int arr[][100], int n) {
    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    //Reverse each row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][n - 1 - j];
            arr[i][n - 1 - j] = temp;
        }
    }

    printf("\nThe rotated matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, i, j, arr[100][100];
    
    printf("Enter the dimension: ");
    if (scanf("%d", &n) != 1) return 1;

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Added '&' to fix the scanf bug
            scanf("%d", &arr[i][j]);
        }
    }

    rev(arr, n);
    
    return 0;
}       