class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2=nums2.size();
        if(len1>len2) return findMedianSortedArrays(nums2, nums1);
        int h =len1;
        int l = 0;
        int fac = (len1+len2+1)/2;

        while (l<=h) {
            int mid1 = l + (h-l)/2;
            int mid2 = fac-mid1;

            int l1=INT_MIN, l2=INT_MIN, r1=INT_MAX, r2=INT_MAX;

            if(mid1 < len1) r1 = nums1[mid1];
            if(mid2 < len2) r2 = nums2[mid2];
            if(mid1 != 0) l1 = nums1[mid1-1];
            if(mid2 != 0) l2 = nums2[mid2-1];

            if (l1<=r2 && l2<=r1) {
                if ((len1+len2)%2 != 0) return max(l1, l2);
                return (max(l1, l2) + (double)min(r1, r2)) / 2.0;
            }
            else if( l1>r2) h = mid1-1;
            else l = mid1+1;
            }

        return 100;
    }
};