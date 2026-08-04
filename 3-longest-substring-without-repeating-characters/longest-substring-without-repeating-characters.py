class Solution(object):
    def lengthOfLongestSubstring(self, s):
        i=0
        a = {}
        m = 0
        l=0
        for i in range(len(s)):
            if s[i] in a and l<=a[s[i]]:
                l = a[s[i]]+1
            a[s[i]] = i
            m = max(m, i-l+1)
        return m