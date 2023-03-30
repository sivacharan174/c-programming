#include <stdio.h>

int reverse(int num, int rev){
    if(num == 0){
        return rev;
    } else {
        rev = rev * 10 + num % 10;
        return reverse(num / 10, rev);
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d", num, reverse(num, 0));
    return 0;
}

