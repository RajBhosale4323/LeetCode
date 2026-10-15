class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int len1 = matrix.size(), len2 = matrix[0].size();
        int j=len2-1, i=0;

        while (i<len1 && j>-1) {
            if (matrix[i][j]==target) return true;

            if (target>matrix[i][j]) i+=1;
            else j-=1;
        }
        return false;
    }
};