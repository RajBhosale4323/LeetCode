class Solution {
public:
    int maxDepth(string s) {
        int len = s.size();
        int ans = 0, cnt = 0;

        for (auto c : s) {
            if (c == '(')
                cnt += 1;
            if (c == ')')
                cnt -= 1;
            ans = max(cnt, ans);
        }

        return ans;
    }
};