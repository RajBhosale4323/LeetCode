class Solution(object):
    def rotate(self, matrix):
        f = []
        n = len(matrix)
        for i in range(n):
            r = []
            for j in range(n):
                r.append(0)
            f.append(r)
        for i in range(n):
            for j in range(n):
                f[i][j] = matrix[n-j-1][i]
        for i in range(n):
            for j in range(n):
                matrix[i][j]= f[i][j]