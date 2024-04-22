#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);  

    int A[n], B[n];  
    
    printf("Enter integers for array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);  
    }
    
    
    for (int i = 0; i < n; i++) {
        B[i] = A[n - 1 - i];
    }
    printf("Array A: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Array B: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
