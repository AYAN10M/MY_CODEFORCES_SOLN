#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* array = (int *)malloc(2 * sizeof(int));
    int i = 0, j = 0;
    for(i = 0; i < numsSize - 1; i++)
    {
        for(j = i + 1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                array[0] = i;
                array[1] = j;
                *returnSize = 2; 
                return array;
            }
        }
    }

    free(array);
    *returnSize = 0;
    return NULL;
}