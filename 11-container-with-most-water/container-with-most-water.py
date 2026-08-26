class Solution:
    def maxArea(self, height: List[int]) -> int:
        l = 0
        r = len(height)-1
        m = 0
        while l<=r:

            if height[l]< height[r]:
                a = height[l]*(r-l)
                l+=1
            else:
                a = height[r]*(r-l)
                r-=1
            m = max(a,m)
        return m