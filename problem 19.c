#include <stdio.h>

int main() {
    int n, m;

    
    printf("Enter the number of elements in array A: ");
    scanf("%d", &n);
    int A[n];

    
    printf("Enter the elements of array A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

   
    printf("Enter the number of elements in array B: ");
    scanf("%d", &m);
    int B[m];

    
    printf("Enter the elements of array B:\n");
    for (int j = 0; j < m; j++) {
        scanf("%d", &B[j]);
    }

    printf("Intersection of A and B:\n");

    int foundIntersection = 0;  

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                
                int print = 1;
                for (int k = 0; k < i; k++) {
                    if (A[k] == A[i]) {
                        print = 0;
                        break;
                    }
                }
                if (print) {
                    printf("%d ", A[i]);
                    foundIntersection = 1;
                }
                break;
            }
        }
    }

    
    if (!foundIntersection) {
        printf("Empty set");
    }
    printf("\n");

    return 0;
}
