/*
 * @lc app=leetcode id=1342 lang=cpp
 *
 * [1342] Number of Steps to Reduce a Number to Zero
 */

// @lc code=start
class Solution {
public:
    int numberOfSteps(int num) {
        int counter = 0;

        while(num != 0) {
            if(num % 2 == 0)
                num = num/2;
            else 
                num--;
            counter++;
        }

        return counter;
    }
};
// @lc code=end

