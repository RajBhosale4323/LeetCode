class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        int l1 = nums1.size(), l2=nums2.size(), i=0, j=0;
        while (i<l1 && j<l2) {
            if (nums1[i]<nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            }
            else {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while (i<l1) {
            ans.push_back(nums1[i]);
            i++;
        }
        while (j<l2) {
            ans.push_back(nums2[j]);
            j++;
        }

        int len = ans.size();
        if (len%2!=0) return ans[len/2];
        else return (ans[len/2]+ans[(len/2)-1])/2.0;
    }
};