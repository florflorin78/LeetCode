/*
 * @lc app=leetcode id=977 lang=c
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int n = numsSize, left = 0, right = n - 1, position = n - 1;
    int* result = malloc(n * sizeof(int));

    while(left <= right) {
        if(abs(nums[left]) > abs(nums[right])) {
            result[position--] = nums[left] * nums[left];
            left++;
        }
        else {
            result[position--] = nums[right] * nums[right];
            right--;
        }
    }

    *returnSize = n;

    return result;
}
// @lc code=end

