#include <stdio.h>

int isPerfect(int num);

void printPerfect(int start, int end) {
    int i;
    printf("Perfect numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
}

int isPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (num == sum);
}

int main() {
    int start, end;
    printf("Enter the start and end points: ");
    scanf("%d %d", &start, &end);
    printPerfect(start, end);
    return 0;
}

