


#include <stdio.h>

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    float sum = 0;
    float avg;

    float my_numbers[n];

    for(int i = 0; i < n; i++) {
        scanf("%f", &my_numbers[i]);
    }

    for(int i = 0; i < n; i++) {
        sum += my_numbers[i];
    }

    avg = sum / n;

    printf("Average: %.2f\n", avg);

    return 0;
}
