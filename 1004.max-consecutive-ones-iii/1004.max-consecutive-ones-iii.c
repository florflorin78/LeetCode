/*
 * @lc app=leetcode id=1004 lang=c
 *
 * [1004] Max Consecutive Ones III
 */

// @lc code=start
int longestOnes(int* nums, int numsSize, int k) {
    int left = 0, current = 0, answer = 0;
    for(int right = 0; right < numsSize; right++) {
        if(nums[right] == 0)
            current++;
        while(current > k) {
            if(nums[left] == 0)
                current--;
            left++;
        }
    if(answer < right - left + 1)
        answer = right - left  + 1;
    }
    return answer;
}
// @lc code=end

