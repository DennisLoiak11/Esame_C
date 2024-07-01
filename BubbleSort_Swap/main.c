#include <stdio.h>
#define SIZE 10

void bubblesort(int * const array, size_t size);

int main() {

    int a[SIZE] = {2,34,56,23,12,99,45,87,32,10};
    puts("Array a in original order: ");
    for (size_t i = 0; i < SIZE ; ++i) {
        printf("%3d", a[i]);
    }

    puts("");

    bubblesort(a, SIZE);
    puts("\nArray a in ascending order: ");
    for (size_t i = 0; i < SIZE ; ++i) {
        printf("%3d", a[i]);
    }

}

void bubblesort(int * const array, const size_t size){
    void swap(int *element1Ptr, int *element2Ptr);

    for (unsigned int pass = 0; pass < size - 1; ++pass) {

        for (size_t j = 0; j < size - 1; ++j) {
            if(array[j] > array[j + 1]){
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}
void swap(int *element1Ptr, int *element2Ptr){
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}