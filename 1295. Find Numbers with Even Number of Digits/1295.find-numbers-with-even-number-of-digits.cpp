/*
 * @lc app=leetcode id=1295 lang=cpp
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_numbers = 0;
        for(int i = 0; i < nums.size(); i++) {
            int copy = nums[i], digits_counter = 0;
            while(copy) {
                copy = copy / 10;
                digits_counter++;
            }
            if(digits_counter % 2 == 0)
                even_numbers++;
        }
        return even_numbers;
    }
};
// @lc code=end

