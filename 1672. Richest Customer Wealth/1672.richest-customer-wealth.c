/*
 * @lc app=leetcode id=1672 lang=c
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max_wealth = 0;
    for(int i = 0;i < accountsSize; i++){
        int wealth = 0;
        for(int j = 0;j < accountsColSize[i]; j++)
            wealth += accounts[i][j];
        if(max_wealth < wealth)
            max_wealth = wealth;
    }
    return max_wealth;
}
// @lc code=end

