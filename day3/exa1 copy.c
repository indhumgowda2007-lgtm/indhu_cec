#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70};  
    int size = 7;
    int i;

    
    int index_insert = 3, new_element = 48;
    for (i = size; i > index_insert; i--) {
        arr[i] = arr[i-1];
    }
    arr[index_insert] = new_element;
    size++;

    printf("After Insertion (48 at index 3):\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    
    int index_delete = 5;
    for (i = index_delete; i < size - 1; i++) {
        arr[i] = arr[i+1];
    }
    size--;

    printf("\n\nAfter Deletion (index 5):\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    
    arr[6] = 33;

    printf("\n\nAfter Updating (index 6 = 33):\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}