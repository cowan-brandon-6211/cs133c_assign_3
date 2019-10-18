//arrays
#include <stdio.h>

int main()
{
    int size = 5;
    //int nums[] = {12, 15, 25, 32, 7}; //starts indexing at 0
    int nums[size];

    for(int i = 0; i < size; ++i)
    {
        printf("Please enter a number (%d/%d)");
        scanf("%d", nums + i);
    }
    for(int i = 0; i < size; ++i)
    {
        printf("%p, ", nums[i]);
    } 
    for(int i = 0; i < size; ++i)
    {
        if(nums[i] ==42)
        {
            printf("42 found");
        }
    }
    return 0;
}