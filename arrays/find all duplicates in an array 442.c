Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.
You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output
Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:
Input: nums = [1,1,2]
Output: [1]
Example 3:
Input: nums = [1]
Output: []
#include <stdlib.h>
#include <string.h>

int* findDuplicates(int* nums, int numsSize, int* returnSize)
{
    int* freq = (int*)calloc(numsSize + 1, sizeof(int));
    int* res = (int*)malloc(numsSize * sizeof(int));
    int k = 0;

    for(int i = 0; i < numsSize; i++)
    {
        freq[nums[i]]++;

        if(freq[nums[i]] == 2)
        {
            res[k++] = nums[i];
        }
    }

    *returnSize = k;
    return res;
}
