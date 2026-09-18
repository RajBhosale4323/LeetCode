class Solution {
public:
    int ans(vector<int>& nums, int mid, int l) {
        int s = 0;
        for (int i=0;i<l;i++) {
            s += ceil((double)nums[i]/mid);
        }
        return s;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=nums.size();
        int high = *max_element(nums.begin(), nums.end());
        int low=1;

        while (low<high) {
            int mid = low + (high-low)/2;
            cout << mid << endl;

            if(ans(nums, mid, l)>threshold) low=mid+1;
            else high=mid;
        }
        return low;
    }
};