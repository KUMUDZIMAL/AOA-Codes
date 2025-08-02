#include <stdio.h>
#include <stdlib.h>

int binarySearch(int a[], int n, int data) {
    int l = 0, r = n - 1, mid; 

    while (l <= r) {  
        mid= l + (r - l) / 2; 

        if (a[mid] == data) {
            return mid;
        } else if (data < a[mid]) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return -1;
}

int main() {
    int n, i, data;

    printf("ENTER NO OF ELEMENTS\n");
    scanf("%d", &n);

    int a[n];

    printf("ENTER ELEMENTS\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("ENTER ELEMENT TO BE SEARCHED\n");
    scanf("%d", &data);

    int found = binarySearch(a, n, data);

    if (found != -1) {
        printf("ELEMENT FOUND AT INDEX %d\n", found);
    } else {
        printf("ELEMENT NOT FOUND\n");
    }

    return 0;
}
