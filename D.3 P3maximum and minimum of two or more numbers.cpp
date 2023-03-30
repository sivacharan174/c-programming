#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n, num, max_num, min_num;
    
    printf("Enter the number of values: ");
    scanf("%d", &n);
    
    printf("Enter the values: ");
    scanf("%d", &num);
    max_num = min_num = num; 
    
    for(int i = 1; i < n; i++) {
        scanf("%d", &num);
        max_num = max(max_num, num); 
        min_num = min(min_num, num); 
    }
    
    printf("Maximum number: %d\n", max_num);
    printf("Minimum number: %d\n", min_num);
    
    return 0;
}

