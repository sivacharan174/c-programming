#include <stdio.h>

int sumNatural(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of natural numbers from 1 to %d is %d\n", n, sumNatural(n));
    return 0;
}

int sumNatural(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n + sumNatural(n-1);
    }
}

