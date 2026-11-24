#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    // Allocate memory for the output array
    int* result = (int*)malloc(numsSize * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }

    // Set the returnSize pointer so the caller knows the output array's length
    *returnSize = numsSize;

    // The first element of the running sum is always the first element of nums
    result[0] = nums[0];

    // Each subsequent element is the previous running sum plus the current number
    for (int i = 1; i < numsSize; i++) {
        result[i] = result[i - 1] + nums[i];
    }

    return result;
}