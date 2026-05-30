Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 
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
