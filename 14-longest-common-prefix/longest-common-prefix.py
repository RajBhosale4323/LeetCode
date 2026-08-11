class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        ans = ""
        if len(strs) <= 1:
            s = 0
            ans = strs[0]
        elif len(strs[0]) >= len(strs[1]):
            s = len(strs[1])
        else:
            s = len(strs[0])
        for i in range(s):
            if (strs[0][i] == strs[1][i]):
                ans = ans + strs[0][i]
            else:
                break

        for n in range(1, len(strs)):
            if n+1 == len(strs):
                break
            else:
                if len(strs[n]) >= len(strs[n+1]):
                    s = len(strs[n+1])
                else:
                    s = len(strs[n])
                if len(ans) > s:
                    ans = ans[:s]
                for i in range(s):
                    if len(ans) == 0:
                        break
                    elif i >= len(ans):
                        print("tt")
                        continue
                    elif ans[i] == strs[n][i] and ans[i] == strs[n+1][i]:
                        continue
                    elif ans[i] != strs[n][i] or ans[i] != strs[n+1][i]:
                        ans = ans[:i]
                    
        return ans

        