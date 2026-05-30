#include <stdio.h>
#include <stdlib.h>

int foundInResult(int res[], int k, int value)
{
    for(int i = 0; i < k; i++)
    {
        if(res[i] == value)
            return 1;
    }
    return 0;
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

    int res[1000];
    int k = 0;

    for(int i = 0; i < nums1Size; i++)
    {
        for(int j = 0; j < nums2Size; j++)
        {
            if(nums1[i] == nums2[j])
            {
                if(!foundInResult(res, k, nums1[i]))
                {
                    res[k++] = nums1[i];
                }
                break;
            }
        }
    }

    int *ans = (int*)malloc(k * sizeof(int));

    for(int i = 0; i < k; i++)
        ans[i] = res[i];

    *returnSize = k;
    return ans;
}
