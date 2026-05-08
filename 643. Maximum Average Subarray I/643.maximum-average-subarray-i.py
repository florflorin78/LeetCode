#
# @lc app=leetcode id=643 lang=python3
#
# [643] Maximum Average Subarray I
#

# @lc code=start
class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        current = 0
        for i in range(k):
            current += nums[i]

        answer = current 
        for i in range(k, len(nums)):
            current += nums[i] - nums[i - k]
            answer = max(answer, current)

        return answer / k
# @lc code=end

