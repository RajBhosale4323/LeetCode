class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = nums.size();
        int low=1;
        int high=l-2;
        if (l==1) return nums[0];
        if (l==3) {
            if (nums[0]==nums[1]) return nums[2];
            else if (nums[1]==nums[2]) return nums[0];
        }
        if (nums[0]!=nums[1]) return nums[0];
        if (nums[l-1]!=nums[l-2]) return nums[l-1];

        while (low<high) {
            int mid = low + (high-low)/2;
            if (nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];

            if (mid%2==0) {
                if(nums[mid]==nums[mid+1]) low=mid+1;
                else high=mid-1;
            }
            else {
                if(nums[mid]==nums[mid-1]) low=mid+1;
                else high=mid-1;
            }
        }
        return nums[low];
    }
};