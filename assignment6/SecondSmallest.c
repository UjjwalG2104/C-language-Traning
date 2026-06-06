#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int smallest = arr[0];
    int second = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            second = smallest;
            smallest = arr[i];
        }
    }

    printf("Second Smallest = %d", second);

    return 0;
}