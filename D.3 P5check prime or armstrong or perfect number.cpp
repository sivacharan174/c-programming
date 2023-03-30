#include <stdio.h>

int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    if (isPerfect(num))
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}


int isPrime(int num) {
    int i;
    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}


int isArmstrong(int num) {
    int temp = num, sum = 0, rem;
    while (temp != 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    if (num == sum)
        return 1;
    else
        return 0;
}


int isPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i <= num/2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (num == sum)
        return 1;
    else
        return 0;
}

