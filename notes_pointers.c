//pointers
#include <stdio.h>

int main()
{
    int num = 42;
    int *num_ptr = &num;
    int **num_ptr_ptr = &num_ptr;

    printf("num: %d \n", num);
    printf("num pointer: %p(@%p)\n", num_ptr, &num_ptr);
    printf("num pointer: %p(@%p)\n", num_ptr, &num_ptr_ptr);

    printf("\n\nnum: %d(@%p)\n", num, &num);
    printf("num pointer is pointing at value: %d\n", *num_ptr);
    printf("num pointer-pointer immediately points at value: %p\n", *num_ptr_ptr);
    printf("num pointer-pointer ultimately points at value: %d\n", **num_ptr_ptr);

    return 0;
}