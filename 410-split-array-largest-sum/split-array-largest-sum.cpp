class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int len=nums.size();
        int l = *max_element(nums.begin(), nums.end()), h=0;
        for (int i=0;i<len;i++) {
            h+=nums[i];
        }

        while(l<=h) {
            int mid=l+(h-l)/2;
            int cnt=1, sum=0;

            for (int i=0;i<len;i++) {
                if(sum+nums[i]<=mid) sum+=nums[i];
                else {
                    sum=nums[i];
                    cnt+=1;
                }
            }

            if (cnt<=k)h = mid-1;
            else l = mid+1;
        }

        return l;
    }
};