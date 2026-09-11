class Solution {
public:
    int ans(vector<int> & nums, int low, int high){
        if (low>=high) return high;

        int mid = low + (high-low)/2;

        if (nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;

        if (nums[mid-1]>nums[mid]) return ans(nums, low, mid-1);
        else return ans(nums, mid+1, high);
    }
    int findPeakElement(vector<int>& nums) {
        int l = nums.size()-1;
        if (nums.size()==1) return 0;
        if (nums.size()==2) {
            if (nums[0]>nums[1]) return 0;
            else return 1;
        }
        if (nums[0]>nums[1]) return 0;
        if (nums[l]>nums[l-1]) return l;
        
        return ans(nums, 1, l-1);
    }
};