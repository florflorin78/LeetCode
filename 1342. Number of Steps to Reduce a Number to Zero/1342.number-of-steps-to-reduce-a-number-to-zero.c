/*
 * @lc app=leetcode id=1342 lang=c
 *
 * [1342] Number of Steps to Reduce a Number to Zero
 */

// @lc code=start
int numberOfSteps(int num) {
    int counter = 0;
    while(num > 0) {
        if(num % 2 == 0)
            num = num/2;
        else 
            num--;
        counter++;
    }

    return counter;
}
// @lc code=end

