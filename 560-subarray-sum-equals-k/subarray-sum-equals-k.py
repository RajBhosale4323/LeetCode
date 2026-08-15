class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        s = 0
        c = 0
        has = {}
        for i in range(len(nums)):
            if s not in has:
                has[s] = 1
            else:
                has[s]+=1
            s+=nums[i]
            if s-k in has:
                c+=has[s-k]
        if s not in has:
            has[s] = 0
        else:
            has[s]+=1
        return c