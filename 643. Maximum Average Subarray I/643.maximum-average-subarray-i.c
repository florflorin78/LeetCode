/*
 * @lc app=leetcode id=643 lang=c
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
double findMaxAverage(int* nums, int numsSize, int k) {
    int current = 0;
    for(int i = 0; i < k; i++) 
        current += nums[i];

    int answer = current; 
    for(int i = k; i < numsSize; i++) {
        current += nums[i] - nums[i - k];
        if(answer < current) 
            answer = current;
    }
    return (double)answer / k;
}
// @lc code=end

