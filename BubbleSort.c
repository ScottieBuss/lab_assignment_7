#include <stdlib.h>
#include <stdio.h>

int main() {
    int i, j, temp;
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int num = sizeof(arr) / sizeof(arr[0]);
    int swaps[num];

    for (i = 0; i < num; i++) {
        swaps[i] = 0;
    }
	
    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < num - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps[j + 1]++;
            }
        }
    }
	
    for (i = 0; i < num; i++) {
        printf("%d: %d swaps\n", i, swaps[i]);
    }

    return 0;
}
