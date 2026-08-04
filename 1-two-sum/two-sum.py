class Solution(object):
    def twoSum(self, nums, target):
        hash = {}
        n = len(nums)
        for i in range(n):
            c = target - nums[i]
            if c in hash:
                return i, hash[c]
            hash[nums[i]] = i    