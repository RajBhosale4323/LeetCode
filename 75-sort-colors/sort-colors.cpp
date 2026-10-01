class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        int low=0, high=len-1, i=0;
        while (i<=high) {
            if(nums[i]==0) {
                swap(nums[i], nums[low]);
                i++;
                low++;
            }
            else if(nums[i]==2) {
                swap(nums[i], nums[high]);
                high--;
            }
            else {
                i++;
            }
        }
    }
};