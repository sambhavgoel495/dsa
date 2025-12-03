#include <stdio.h>

#include<stdlib.h>

int main() {
    int arr[] = {10, 2, 9, 8, 3, 3, 1,10 ,10,10,10};
    int n = sizeof(arr) / sizeof(arr[0]);

        int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    int count[max + 1];

    
    for (int i = 0; i <= max; i++)
        count[i] = 0;

    
    for (int i = 0; i < n; i++)
        count[arr[i]]++;


    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
