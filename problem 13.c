#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);  

    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    int array[n];  
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);  
    }

    int position;
    printf("Enter position to delete the number from: ");
    scanf("%d", &position);  

    if (position < 0 || position >= n) {
        printf("Invalid position.\n");
        return 1;
    }

  
    for (int i = position; i < n - 1; i++) {
        array[i] = array[i + 1];
    }

   
    printf("Modified array: ");
    for (int i = 0; i < n - 1; i++) {  
    }
    printf("\n");

    return 0;
}
