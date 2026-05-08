#
# @lc app=leetcode id=1004 lang=python3
#
# [1004] Max Consecutive Ones III
#

# @lc code=start
class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        left = current = answer = 0
        for right in range(len(nums)):
            if nums[right] == 0:
                current += 1
            while(current > k):
                if(nums[left] == 0):
                    current -= 1
                left += 1
            answer = max(answer, right - left + 1)
        return answer
# @lc code=end

