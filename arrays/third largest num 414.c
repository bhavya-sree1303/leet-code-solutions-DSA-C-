Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
Example 1:
Input: nums = [3,2,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2.
The third distinct maximum is 1.
Example 2:

Input: nums = [1,2]
Output: 2
Explanation:
The first distinct maximum is 2.
The second distinct maximum is 1.
The third distinct maximum does not exist, so the maximum (2) is returned instead.
Example 3:

Input: nums = [2,2,3,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2 (both 2's are counted together since they have the same value).
The third distinct maximum is 1.
 
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
