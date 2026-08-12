class Solution(object):
    def longestConsecutive(self, nums):
        if len(nums)==0:
            return 0
        temp = {nums[0]}
        m=0

        for n in nums:
            temp.add(n)

        for n in temp:
            cnt=0
            if n-1 not in temp:
                i=n
                while i in temp:
                    i+=1
                    cnt+=1
            m = max(m, cnt)
        return m
                 