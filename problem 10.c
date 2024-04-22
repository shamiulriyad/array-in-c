#include <stdio.h>

int main() {
    int n, search, found = 0;
    printf("Enter the number of integers: ");
    scanf("%d", &n);  
    
    int numbers[n];  
    
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);  
    }
    
    printf("Enter the number to search: ");
    scanf("%d", &search);  

    
    for (int i = 0; i < n; i++) {
        if (numbers[i] == search) {
            if (found == 0) {
                printf("FOUND at index positions: ");
            }
            printf("%d", i);
            if (i < n - 1) printf(", ");
            found = 1; 
        }
    }
    
    if (!found) {
        printf("NOT FOUND");  
    }
    
    return 0;
}
