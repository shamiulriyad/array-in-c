#include <stdio.h>

int main() {
    int n, m;
    int i, j, flag;

    
    printf("Enter number of elements in A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter elements of array A:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    
    printf("Enter number of elements in B: ");
    scanf("%d", &m);
    int B[m];
    printf("Enter elements of array B:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        flag = 1; 
        for (j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                flag = 0; 
                break;
            }
        }
        if (flag == 1) {
            printf("%d ", A[i]);
        }
    }

    printf("\n");
    return 0;
}
