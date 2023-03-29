#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    
    printf("Enter the first string: ");
    fgets(str1, 100, stdin);  
    
    printf("Enter the second string: ");
    fgets(str2, 100, stdin);  
    
    str1[strcspn(str1, "\n")] = '\0';  
    str2[strcspn(str2, "\n")] = '\0';  
    
    strcpy(result, str1);  
    strcat(result, str2);  
    
    printf("The concatenated string is: %s", result);
    
    return 0;
}

