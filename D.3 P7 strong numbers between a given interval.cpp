#include <stdio.h>

int factorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int isStrong(int n) {
    int temp = n;
    int sum = 0;
    while (temp != 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int start, end;
    printf("Enter the start and end of the interval: ");
    scanf("%d %d", &start, &end);
    printf("Strong numbers in the given range are:\n");
    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

