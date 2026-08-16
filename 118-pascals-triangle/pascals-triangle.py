class Solution:
    def ncr(self, n, r):
        if r==0:return 1
        return n*self.ncr(n-1, r-1)//r
    def generate(self, numRows: int) -> List[List[int]]:
        f=[]
        for n in range(1,numRows+1):
            a = []
            for i in range(1,n+1):
                a.append(self.ncr(n-1, i-1))
            f.append(a)
        return f