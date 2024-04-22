
#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter the number first array: ");
    scanf("%d", &n1);
    int my_numbers1[n1];
    for(int i = 0; i < n1; i++) {
        scanf("%d", &my_numbers1[i]);
    }

    printf("Enter the number second of array: ");
    scanf("%d", &n2);
    int my_numbers2[n2];
    for(int i = 0; i < n2; i++) {
        scanf("%d", &my_numbers2[i]);
    }

    //  first array as the size of sum_array
    int n = n1;
    int sum_array[n];

    for(int i = 0; i < n; i++) {
        sum_array[i] = my_numbers1[i] + my_numbers2[i];
    }


    for(int i = 0; i < n; i++) {
        printf("%d ", sum_array[i]);
    }
    printf("\n");

    return 0;
}
