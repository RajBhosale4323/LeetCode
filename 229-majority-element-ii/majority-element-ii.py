class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        n = len(nums)
        r = []
        c1=0
        c2=0
        a=0
        b=0

        for num in nums:
            if c1==0 and num!=b:
                c1=1
                a = num
            elif c2==0 and num!=a:
                c2=1
                b = num
            elif num==a:
                c1+=1
            elif num==b:
                c2+=1
            else:
                c1-=1
                c2-=1

        if a==b:
            r.append(a)
            return r
        
        c1=0
        c2=0
        for num in nums:
            if num==a:
                c1+=1
            elif num==b:
                c2+=1
        if c1>n//3:
            r.append(a)
        if c2>n//3:
            r.append(b)

        return r