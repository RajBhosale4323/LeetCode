class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        top = 0
        bottom = len(matrix) - 1
        left = 0
        right = len(matrix[0]) - 1
        op = []

        while top <= bottom and left <= right:
            for a in range(left, right + 1):
                op.append(matrix[top][a])
            top += 1
            for a in range(top, bottom + 1):
                op.append(matrix[a][right])
            right -= 1
            if top <= bottom:
                for a in range(right, left - 1, -1):
                    op.append(matrix[bottom][a])
                bottom -= 1
            if left <= right:
                for a in range(bottom, top - 1, -1):
                    op.append(matrix[a][left])
                left += 1

        return op