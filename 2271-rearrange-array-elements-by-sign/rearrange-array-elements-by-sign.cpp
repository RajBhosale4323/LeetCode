class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans(len, 0);
        int p=0, n=1;
        for (int i=0;i<len;i++) {
            if(nums[i]>0) {
                ans[p]=nums[i];
                p+=2;
            }
            else {
                ans[n]=nums[i];
                n+=2;
            }
        }
        return ans;
    }
};