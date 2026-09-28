class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0, h=arr.size()-1;
        if (arr[h]==h+1) return h+k+1;
        while(l<=h) {
            int mid = l-(l-h)/2;
            if ((arr[mid]-mid-1)<k) l=mid+1;
            else h = mid-1;
        }
        return h+k+1;
    }
};