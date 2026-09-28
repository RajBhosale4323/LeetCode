class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l = arr.size();
        int cnt=0;
        int i=1, j=0;
        while (j<l) {
            if (cnt==k) return i-1;
            if (arr[j]==i) {
                i+=1;
                j+=1;
            }
            else {
                cnt+=1;
                i+=1;
            }
            
        }
        return i+k-cnt-1;
    }
};