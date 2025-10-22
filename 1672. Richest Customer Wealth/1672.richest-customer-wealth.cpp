/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;
        for(int i = 0; i < accounts.size(); i++) {
            int wealth = 0;
            for(int j = 0; j < accounts[i].size(); j++) 
                wealth += accounts[i][j];
        
        if(max_wealth < wealth)
            max_wealth = wealth;
        }
            return max_wealth;
        }
    
};
// @lc code=end

