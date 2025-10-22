/*
 * @lc app=leetcode id=1480 lang=c
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));
    if(!result) return NULL;
    result[0] = nums[0];
    for(int i = 1;i < numsSize; i++) {
        result[i] = result[i - 1] + nums[i];
    }
    *returnSize = numsSize;
    return result;
    }
// @lc code=end

