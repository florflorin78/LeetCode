/*
 * @lc app=leetcode id=485 lang=c
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max_length = 0, max = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 1)
            max++;
        else {
            if(max_length < max)
                max_length = max;
            max = 0;
        }
    }
    if(max_length < max)
                max_length = max;

    return max_length;
}
// @lc code=end

