#include <stdio.h>

int main() {
    int arr[10][10]; 
    int i, j, n;
    int sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix: \n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
            if(i == j) {
                sum += arr[i][j]; 
            }
        }
    }

    printf("The diagonal elements are: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i][i]); 
    }

    printf("\nThe sum of diagonal elements = %d\n", sum);

    return 0;
}

