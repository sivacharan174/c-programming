#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[100];
    int i, j, k, flag;
    
    printf("Enter the first string: ");
    fgets(str1, 100, stdin);  
    
    printf("Enter the second string: ");
    fgets(str2, 100, stdin);  
    
    str1[strcspn(str1, "\n")] = '\0';  
    str2[strcspn(str2, "\n")] = '\0';  
    
    k = 0;  
    
    for (i = 0; i < strlen(str2); i++) {
        flag = 0;  
        
        for (j = 0; j < strlen(str1); j++) {
            if (str2[i] == str1[j]) {  
                flag = 1;  
                break;
            }
        }
        
        if (flag == 0) {  
            result[k++] = str2[i];
        }
    }
    
    result[k] = '\0';  
    
    printf("The new string is: %s", result);
    
    return 0;
}

