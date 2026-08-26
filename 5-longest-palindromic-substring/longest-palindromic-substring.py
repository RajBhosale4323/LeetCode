class Solution:
    def longestPalindrome(self, s: str) -> str:
        l = len(s)
        m=0
        st = ""
        for i in range(l):
            temp = s[i]
            if m<1:
                st = s[i]
            for j in range(i+1, l):
                temp+=s[j]
                t = temp
                if t == t[::-1]:
                    if len(temp)>m:
                        m= len(temp)
                        st = temp
        return st