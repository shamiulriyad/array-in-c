

#include <stdio.h>

void find_max_min(int arr[], int n, int *max_val, int *max_index, int *min_val, int *min_index) {
    *max_val = arr[0];
    *max_index = 0;
    *min_val = arr[0];
    *min_index = 0;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max_val) {
            *max_val = arr[i];
            *max_index = i;
        }
        if (arr[i] < *min_val) {
            *min_val = arr[i];
            *min_index = i;
        }
    }
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the value: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max_val, max_index, min_val, min_index;
    find_max_min(arr, n, &max_val, &max_index, &min_val, &min_index);
    
    printf("Max: %d, Index: %d\n", max_val, max_index);
    printf("Min: %d, Index: %d\n", min_val, min_index);

    return 0;
}
