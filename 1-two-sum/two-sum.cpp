class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = nums.size();
        unordered_map<int, int> hash;
        vector<int> ans;
        for(int i=0;i<l;i++) {
            int dif = target-nums[i];
            if (hash.find(dif) != hash.end()) {
                ans.push_back(i);
                ans.push_back(hash[dif]);
                return ans;
            }
            else hash[nums[i]] = i;
        }
        return {};
    }
};