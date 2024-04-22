#include <stdio.h>

int main() {
    int n;


    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n];


    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int u[n];
    int uC = 0;


    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < uC; j++) {
            if (A[i] == u[j]) {
                break;
            }
        }
        if (j == uC) { //
            u[uC++] = A[i];
        }
    }


    printf("\n");
    for (int i = 0; i < uC; i++) {
        printf("%d ", u[i]);
    }
    printf("\n");

    return 0;
}