/*
 * @lc app=leetcode id=412 lang=c
 *
 * [412] Fizz Buzz
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char **fizzBuzz(int n, int* returnSize) {
    char **answer = malloc(n * sizeof(char *));
    *returnSize = n;
    for (int i = 1; i <= n; i++) {
        answer[i - 1] = malloc(12);
        if (i % 15 == 0) 
            strcpy(answer[i - 1], "FizzBuzz");
         else if (i % 3 == 0) 
            strcpy(answer[i - 1], "Fizz");
        else if (i % 5 == 0) 
            strcpy(answer[i - 1], "Buzz");
        else 
            sprintf(answer[i - 1], "%d", i);
        
        
    }
    
    return answer;
}
// @lc code=end

