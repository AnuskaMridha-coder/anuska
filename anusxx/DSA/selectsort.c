#include <stdio.h>

int main() {
    int i, n, m, j, swap;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        m = i;
        for (j = i + 1; j < n; j++) {
            if (a[m] > a[j]) {
                m = j;
            }
        }
        if (m != i) {
            swap = a[i];
            a[i] = a[m];
            a[m] = swap;
        }
    }
    printf("Sorted result: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}