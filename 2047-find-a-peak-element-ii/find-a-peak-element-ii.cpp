class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int len1 = mat.size(), len2 = mat[0].size();
        int i=0,j=0;
        for (i=0;i<len1;i++) {
            for (j=0;j<len2;j++) {
                int cnt=0;
                if (i>0) {
                    if (mat[i][j]>mat[i-1][j]) cnt+=1;
                }
                else cnt+=1;

                if (i<len1-1) {
                    if (mat[i][j]>mat[i+1][j]) cnt+=1;
                }
                else cnt+=1;

                if (j>0) {
                    if (mat[i][j]>mat[i][j-1]) cnt+=1;
                }
                else cnt+=1;

                if (j<len2-1) {
                    if (mat[i][j]>mat[i][j+1]) cnt+=1;
                }
                else cnt+=1;

                if (cnt==4) return {i, j};
            }
        }
        return {0};
    }
};