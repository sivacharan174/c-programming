#include <stdio.h>

int isPrime(int n); 

int main() {
    int start, end, i;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for(i=start; i<=end; i++) {
        
        if(isPrime(i))
            printf("%d ", i);
    }
    return 0;
}


int isPrime(int n) {
    int i;
    if(n < 2) 
        return 0;
    for(i=2; i<=n/2; i++) {
        if(n%i == 0)
            return 0; 
    }
    return 1; 
}

