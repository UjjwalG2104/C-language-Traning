#include <stdio.h>

int main() {
    int n, i, j, unique;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array after removing duplicates: ");

    for(i = 0; i < n; i++) {
        unique = 1;

        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                unique = 0;
                break;
            }
        }

        if(unique)
            printf("%d ", arr[i]);
    }

    return 0;
}