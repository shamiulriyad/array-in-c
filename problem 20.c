#include <stdio.h>

int main() {
    int n, m;
    int A[100], B[100], unionAB[200]; 
    int unionSize = 0, i, j, flag;

    
    printf("Enter number of elements in array A: ");
    scanf("%d", &n);
    printf("Enter the elements of array A:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

   
    printf("Enter number of elements in array B: ");
    scanf("%d", &m);
    printf("Enter the elements of array B:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < n; i++) {
        unionAB[unionSize++] = A[i];
    }
    
    for (i = 0; i < m; i++) {
        flag = 0; 
        for (j = 0; j < unionSize; j++) {
            if (B[i] == unionAB[j]) {
                flag = 1; 
                break;
            }
        }
        if (!flag) { 
            unionAB[unionSize++] = B[i];
        }
    }
    printf("\n");
    for (i = 0; i < unionSize; i++) {
        printf("%d ", unionAB[i]);
    }
    printf("\n");

    return 0;
}
