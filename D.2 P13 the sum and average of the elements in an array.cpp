#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, avg = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

