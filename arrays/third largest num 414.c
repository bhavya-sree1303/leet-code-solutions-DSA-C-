#include <stdlib.h>

int cmp(const void* a, const void* b)
{
    int x = *(int*)a;
    int y = *(int*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int thirdMax(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), cmp);

    int count = 1;

    for(int i = numsSize - 1; i > 0; i--)
    {
        if(nums[i] != nums[i - 1])
            count++;

        if(count == 3)
            return nums[i - 1];
    }

    return nums[numsSize - 1];
}
