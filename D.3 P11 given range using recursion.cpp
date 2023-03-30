#include <stdio.h>

void printNatural(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d are: ", n);
    printNatural(n);
    printf("\n");
    return 0;
}

void printNatural(int n) {
    if (n > 1) {
        printNatural(n-1);
    }
    printf("%d ", n);
}

