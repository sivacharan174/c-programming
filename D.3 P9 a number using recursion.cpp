#include <stdio.h>

int power(int base, int exp);

int main() {
    int base, exp;
    printf("Enter the base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("%d^%d = %d\n", base, exp, power(base, exp));
    return 0;
}

int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    else if (exp % 2 == 0) {
        int half = power(base, exp/2);
        return half * half;
    }
    else {
        return base * power(base, exp-1);
    }
}

