class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int len1 = mat.size(), len2 = mat[0].size();
        int l = 0, h = len1 - 1;

        while (l<=h) {
            int mid = l+(h-l)/2;
            int mx=mat[mid][0];
            int index=0;

            for(int i=0;i<len2;i++) {
                if (mx<mat[mid][i]) {
                    mx = mat[mid][i];
                    index=i;
                }
            }

            int left = mid-1>=0?mat[mid-1][index]:-1;
            int right = mid+1<len1?mat[mid+1][index]:-1;

            if(left<mat[mid][index] && right<mat[mid][index]) return {mid, index};

            if (left>mat[mid][index]) h = mid-1;
            else l = mid+1;
        }

        return {-1, -1};
    }
};