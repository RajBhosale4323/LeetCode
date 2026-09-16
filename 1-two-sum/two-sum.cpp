class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = nums.size();
        unordered_map<int, int> hash;
        for (int i=0;i<l;i++) {
            int d = target-nums[i];
            if (hash.find(d) != hash.end()) {
                return {hash[d], i};
            }
            else {
                hash[nums[i]] = i;
            }
        }
        return {};
    }
};