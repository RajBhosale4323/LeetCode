class Solution(object):
    def lengthOfLongestSubstring(self, s):
        i=0
        a = {}
        m = 0
        l=0
        for i in range(len(s)):
            let = s[i]
            if let in a and l<=a[let]:
                l = a[let]+1
            a[let] = i
            c = i-l+1
            if c > m:
                m = c
        return m