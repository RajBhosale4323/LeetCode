class Solution(object):
    def lengthOfLongestSubstring(self, s):
        # output = []
        # op = ""
        # n = 0
        # while n < len(s):  
        #     if s[n] in op:
        #         output.append(op)
        #         n = n - len(op) + 1
        #         op = ""
        #         op = op + s[n]
        #     else:
        #         op = op + s[n]
        #     n += 1
        # output.append(op)
        # try:
        #     ans = max(output, key=len)
        # except ValueError:
        #     return 0
        # else:
        #     return len(ans)
        i=0
        op = []
        m = 0
        while i<len(s):
            if s[i] in op:
                m = max(m , len(op))
                op = op[op.index(s[i])+1:]
            op.append(s[i])
            i+=1
        return max(m, len(op))
