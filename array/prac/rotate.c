#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int n = sizeof a / sizeof a[0];
    char x;
    int ind;
    printf("Enter the number of positions to rotate:\n");
    scanf("%d", &ind);
    if (ind < 0 || ind > n) {
        printf("Invalid index value!\n");
        return 1;
    }
    int t[ind];  // Temporary array
    printf("Enter the type of rotation (l for left):\n");
    scanf(" %c", &x);
    switch (x) {
        case 'l': {
            for (int i = 0; i < ind; i++) {
                t[i] = a[i];
            }
            for (int i = 0; i < n - ind; i++) {
                a[i] = a[i + ind];
            }
            for (int i = 0; i < ind; i++) {
                a[n - ind + i] = t[i];
            }
            printf("Array after left rotation:\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;
        }

        default:
            printf("Invalid input given!\n");
    }

    return 0;
}

