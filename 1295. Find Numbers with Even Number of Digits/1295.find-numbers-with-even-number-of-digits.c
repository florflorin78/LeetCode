/*
 * @lc app=leetcode id=1295 lang=c
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
int findNumbers(int* nums, int numsSize) {
    int even_numbers = 0;
    for(int i = 0; i < numsSize; i++) {
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
// @lc code=end

