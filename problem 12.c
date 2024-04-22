#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);  // Read the number of integers

    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    int array[n + 1];  
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);  

    int number, position;
    printf("Enter a number to insert: ");
    scanf("%d", &number);  
    printf("Enter position to insert the number at: ");
    scanf("%d", &position);  

    if (position < 0 || position > n) {
        printf("Invalid position.\n");
        return 1;
    }
    for (int i = n; i > position; i--) {
        array[i] = array[i - 1];
    }
    array[position] = number;
    printf("Modified array: ");
    for (int i = 0; i <= n; i++) {  
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
