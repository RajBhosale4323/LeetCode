class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=1;
        int l=nums.size();
        for (int i=1;i<l;i++) {
            if(nums[i-1]==nums[i]) {
                nums.erase(nums.begin()+i);
                i-=1;
                l-=1;
            }
            else cnt+=1;
        }
        return cnt;
    }
};