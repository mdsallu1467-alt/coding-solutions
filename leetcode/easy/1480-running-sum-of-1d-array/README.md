# Running Sum of 1d Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array `nums`. We define a running sum of an array as `runningSum[i] = sum(nums[0]…nums[i])`.

Return the running sum of `nums`.

 

Original
C
 **Example 1:** 

```
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
```

 **Example 2:** 

```
Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
```

 **Example 3:** 

```
Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]

```

 

 **Constraints:** 

- 1 <= nums.length <= 1000
- -10^6 <= nums[i] <= 10^6

## Solution

**Language:** C  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.9 MB (beats 39.93%)  
**Submitted:** 2026-11-24T12:59:42.517Z  

```c
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
```

---

[View on LeetCode](https://leetcode.com/problems/running-sum-of-1d-array/)