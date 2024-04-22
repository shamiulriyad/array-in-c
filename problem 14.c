#include <stdio.h>

int main() {
    int n, m, i;
    int tempA[1000], tempB[1000]; 
    int A[1000], B[1000];         

    
    printf("Enter the number of elements in array A: ");
    scanf("%d", &n);
    printf("Enter the elements for array A:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tempA[i]);
    }

    
    printf("Enter the number of elements in array B: ");
    scanf("%d", &m);
    printf("Enter the elements for array B:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &tempB[i]);
    }


    for (i = 0; i < m; i++) {
        A[i] = tempB[i]; 
    }
    for (i = 0; i < n; i++) {
        B[i] = tempA[i]; 
    }

    
    printf("Array A after swap: ");
    for (i = 0; i < m; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Array B after swap: ");
    for (i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
