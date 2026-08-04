class Solution(object):
    def lengthOfLongestSubstring(self, s):
        i=0
        op = []
        m = 0
        for i in range(len(s)):
            if s[i] in op:
                m = max(m , len(op))
                op = op[op.index(s[i])+1:]
            op.append(s[i])
        return max(m, len(op))
