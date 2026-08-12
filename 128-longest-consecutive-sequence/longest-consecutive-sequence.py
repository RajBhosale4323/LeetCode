class Solution(object):
    def longestConsecutive(self, nums):
        if len(nums)==0:
            return 0
        temp = set(nums)
        m=0

        for n in temp:
            cnt=0
            if n-1 not in temp:
                i=n
                while i in temp:
                    i+=1
                    cnt+=1
            m = max(m, cnt)
        return m
                 