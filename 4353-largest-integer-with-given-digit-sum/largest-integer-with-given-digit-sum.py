class Solution:
    def largestInteger(self, n: int, s: int) -> int:
        p = 1
        for i in range(n):
            p *= 10
        p -= 1
        print(p)
        for i in range(p,-1,-1):
            j=i
            digit = []
            while j>0:
                d = j%10
                digit.append(d)
                j//=10
            a = 0
            for d in digit:
                a+=d

            if a==s:
                return i
        return -1
            
        