/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int> nums) {
        
        int n = nums.size(), left = 0, right = n - 1, position = n - 1;
        vector<int> result(n);

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
        return result;
    }
};
// @lc code=end

