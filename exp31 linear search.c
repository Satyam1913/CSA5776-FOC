#include <stdio.h>
int linearSearch(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index if element is found
        }
    }
    return -1; // Return -1 if element is not found
}
int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, index;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    index = linearSearch(arr, size, key);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found in the array\n");
    }
}
