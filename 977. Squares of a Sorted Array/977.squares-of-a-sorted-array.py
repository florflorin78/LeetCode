class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        result = [0] * len(nums) 
        left = 0
        right = len(nums) - 1
        position = len(nums) - 1
        
        while(left <= right):
            if(abs(nums[left]) > abs(nums[right])):
                result[position] = nums[left] ** 2
                left += 1
            else:
                result[position] = nums[right] ** 2
                right -= 1
            position -= 1
        return result