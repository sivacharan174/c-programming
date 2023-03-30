#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

void printArmstrong(int start, int end) {
    int i;
    printf("Armstrong numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
}

int isArmstrong(int num) {
    int digit, sum = 0, temp = num;
    int digits = (int) log10(num) + 1;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return (num == sum);
}

int main() {
    int start, end;
    printf("Enter the start and end points: ");
    scanf("%d %d", &start, &end);
    printArmstrong(start, end);
    return 0;
}

