class Solution {
public:
    int ncr(int n, int r) {
        if (r == 0)
            return 1;
        return n * ncr(n - 1, r - 1)/r;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int n = 1; n < numRows + 1; n++) {
            vector<int> a;
            for (int i = 1; i < n + 1; i++) {
                a.push_back(ncr(n - 1, i - 1));
            }
            ans.push_back(a);
        }
        return ans;
    }
};