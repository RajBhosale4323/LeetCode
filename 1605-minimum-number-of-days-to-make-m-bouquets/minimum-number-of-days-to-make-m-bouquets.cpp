class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l = bloomDay.size();
        if ((long long)m*k>l) return-1;
        int low=1, high=*max_element(bloomDay.begin(), bloomDay.end());
        while (low<high) {
            int ptr=0;
            int ans=0;
            int mid=low+(high-low)/2;
            for (int j=0;j<l;j++) {
                if (bloomDay[j]<=mid) ptr+=1;
                else ptr=0;
                if (ptr>=k) {
                    ans+=1;
                    ptr=0;
                }
            }
            if (ans>=m) high = mid;
            else low = mid+1;
        }
        return low;
    }
};