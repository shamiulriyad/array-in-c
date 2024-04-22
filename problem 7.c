

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int my_numbers[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &my_numbers[i]);
    }

    //Reverse order
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", my_numbers[i]);
    }
    printf("\n");

    return 0;
}
