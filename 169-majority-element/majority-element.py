class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        cnt = 0
        a = 0

        for num in nums:
            if cnt == 0:
                cnt = 1
                a = num
            elif a == num:
                cnt += 1
            else:
                cnt -= 1
        
        cnt1 = nums.count(a)
        
        if cnt1 > (n // 2):
            return a
        
        return -1
