class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int i;
        int l = weights.size();
        int high = 0;
        for (i=0;i<l;i++) {
            high += weights[i];
        }
        int low = *max_element(weights.begin(), weights.end());

        while (low<high) {
            int mid = low + (high-low)/2;
            int d=0;
            int s=0;
            for (i=0;i<l;i++) {
                if (s+weights[i]>mid) {
                    d+=1;
                    s=0;
                }
                s+=weights[i];
            }
            if (s>0) d+=1;
            if (d<=days) high = mid;
            else low = mid+1;
        }
        return low;
    }
};