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
