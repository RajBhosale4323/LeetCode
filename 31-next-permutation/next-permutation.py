class Solution(object):
    def nextPermutation(self, nums):
        n = len(nums)
        b=-1
        for i in range(n-2,-1,-1):
            if nums[i]<nums[i+1]:
                b=i
                break

        if b == -1:
            for i in range(n):
                for j in range(i+1,n):
                    if nums[j]<nums[i]:
                        nums[i], nums[j] = nums[j], nums[i]
            return nums
        
        for a in range(n-1,b,-1):
            if nums[b] < nums[a]:
                nums[b], nums[a] = nums[a], nums[b]
                break
            
        for i in range(b+1,n):
            for j in range(i+1,n):
                if nums[j]<nums[i]:
                    nums[i], nums[j] = nums[j], nums[i]

        return nums