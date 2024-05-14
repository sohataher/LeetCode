class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        
        max_subarr = nums[0]
        curr_sum = 0
        
        for num in nums:
            
            if curr_sum < 0:
                curr_sum = 0
            curr_sum += num
            max_subarr = max(max_subarr, curr_sum)
    
        return max_subarr
        