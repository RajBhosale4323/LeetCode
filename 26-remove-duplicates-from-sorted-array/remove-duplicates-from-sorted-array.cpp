class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=1;
        int l=nums.size();
        vector<int> ans;
        int last=nums[0];
        ans.push_back(nums[0]);
        for (int i=1;i<l;i++) {
            if(nums[i]!=last) {
                cnt+=1;
                last=nums[i];
                ans.push_back(nums[i]);
            }
        }
        nums = ans;
        return cnt;
    }
};