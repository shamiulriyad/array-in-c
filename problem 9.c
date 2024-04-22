#include <stdio.h>

int main() {
    int n, i, count = 0;
    char c;

    
    printf("Enter number of alphabets: ");
    scanf("%d", &n);

    

    printf("Enter %d alphabets: ", n);

    for (i = 0; i < n; i++) {
        scanf("%c", &c);

       
        switch (c) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
                break;
            default:
                break;  
        }
    }

    
    printf("Count: %d\n", count);

    return 0;
}
