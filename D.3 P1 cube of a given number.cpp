#include <stdio.h>


int cube(int num) {
    return num * num * num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = cube(num);
    printf("The cube of %d is %d\n", num, result);

    return 0;
}

