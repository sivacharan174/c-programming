#include <stdio.h>

int sumEven(int n);
int sumOdd(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of even numbers from 1 to %d is %d\n", n, sumEven(n));
    printf("Sum of odd numbers from 1 to %d is %d\n", n, sumOdd(n));
    return 0;
}

int sumEven(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n % 2 == 0) {
        return n + sumEven(n - 2);
    }
    else {
        return sumEven(n - 1);
    }
}

int sumOdd(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n % 2 != 0) {
        return n + sumOdd(n - 2);
    }
    else {
        return sumOdd(n - 1);
    }
}

