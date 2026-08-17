class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        n = len(nums)
        h = {}
        r = []
        for i in nums:
            if i in h:
                h[i] +=1
            else:
                h[i] = 1
            if h[i]>n/3 and i not in r:
                r.append(i)
        return r