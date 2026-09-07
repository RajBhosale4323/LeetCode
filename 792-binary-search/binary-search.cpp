class Solution {
public:
    int bs(vector<int>& nums, int target, int l, int h) {
        if (l>h) return -1;
        int m = round((l+h)/2);
        if (nums[m]==target) return m;
        else if (nums[m]>target) return bs(nums, target, l, m-1);
        else return bs(nums, target, m+1, h);
        }

    int search(vector<int>& nums, int target) {
        if (nums.size() == 1) {
            if (nums[0]==target) return 0;
            else return -1;
        }
        return bs(nums, target, 0, nums.size()-1);
    }
};