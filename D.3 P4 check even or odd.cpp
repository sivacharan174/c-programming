#include <stdio.h>


int isEven(int num) {
    if (num % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isEven(num) == 1) {
        printf("%d is even.\n", num);
    }
    else {
        printf("%d is odd.\n", num);
    }
    return 0;
}

