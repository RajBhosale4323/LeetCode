class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l = nums.size();
        int cnt=0;
        int n =0;
        for(int i=0;i<l;i++) {
            if(cnt<=0) {
                n = nums[i];
            }

            if(nums[i]==n) cnt+=1;
            else cnt-=1;
        }
        return n;
    }
};