class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        n = len(nums)
        ans = []
        i = 0
        nums.sort()
        if i > 0 and nums[i] == nums[i - 1]:
            i+=1
        while i<n-2:
            while i > 0 and i <n-2 and nums[i] == nums[i - 1]:
                i+=1
            j=i+1
            k=n-1
            while j<k:
                s = nums[i]+nums[j]+nums[k]
                if s==0:
                    temp = [nums[i], nums[j], nums[k]]
                    temp.sort()
                    ans.append(temp)
                    j+=1
                    k-=1
                    while j<k and nums[j]==nums[j-1]:
                        j+=1
                    while j<k and nums[k]==nums[k+1]:
                        k-=1
                elif s<0:
                    j+=1
                else:
                    k-=1
            i+=1

        return ans