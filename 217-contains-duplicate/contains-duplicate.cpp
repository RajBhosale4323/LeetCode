class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int l = nums.size();
        unordered_set<int> hast;

        for (auto x : nums) {
            if (hast.count(x))
                return true;
            hast.insert(x);
        }
        return false;
    }
};