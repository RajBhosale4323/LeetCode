class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int len1 = matrix.size();
        int len2 = matrix[0].size();
        int l1 = 0, l2 =0;
        int h1 = len1-1, h2 = len2-1;

        while (l1<=h1) {
            int mid1 = l1 + (h1-l1)/2;

            if (matrix[mid1][0] <= target && matrix[mid1][h2] >= target) {
                while (l2<=h2) {
                    int mid2 = l2 + (h2-l2)/2;

                    if (matrix[mid1][mid2]==target) return true;
                    if (matrix[mid1][mid2]<target) l2 = mid2+1;
                    else h2 = mid2-1;
                }
            }
            if (matrix[mid1][h2] < target) l1 = mid1+1;
            else h1 = mid1-1;
        }
        return false;
    }
};