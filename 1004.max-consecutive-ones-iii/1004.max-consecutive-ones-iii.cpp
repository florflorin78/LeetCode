/*
 * @lc app=leetcode id=1004 lang=cpp
 *
 * [1004] Max Consecutive Ones III
 */

// @lc code=start
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, current = 0, answer = 0;
        for(int right = 0; right < nums.size(); right++) {
            if(nums[right] == 0)
                current++;
            while(current > k) {
                if(nums[left] == 0)
                    current--;
                left++;
            }
        answer = max(answer, right - left + 1);
        }
    return answer;
    }
};
// @lc code=end

