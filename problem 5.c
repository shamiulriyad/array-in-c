

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int sum;

    int my_numbers[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &my_numbers[i]);
    }
       for (int i = 0; i < n; i++) {
         if (my_numbers[i] % 2 != 0) {
            sum += my_numbers[i];
        }
    }
        printf("%d\n", sum);
    return 0;
}