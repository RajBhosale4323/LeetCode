class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash;
        int len = nums.size();
        if (len == 0)
            return 0;

        for (int i = 0; i < len; i++) {
            hash.insert(nums[i]);
        }
        int ans = INT_MIN;

        for (auto n:hash) {
            if (hash.find(n - 1) == hash.end()) {
                int a = 1;
                int cnt = 1;
                while (hash.find(n + a) != hash.end()) {
                    cnt += 1;
                    a += 1;
                }
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};