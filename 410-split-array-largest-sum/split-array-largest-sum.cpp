class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int len = nums.size();

        int l = *max_element(nums.begin(), nums.end());

        if (len == k)
            return l;
        else if (len < k)
            return -1;

        int h = 0;
        for (int i = 0; i < len; i++) {
            h += nums[i];
        }

        while (l <= h) {
            int cnt = 1, sum = 0;
            int mid = l + (h - l) / 2;

            for (int i = 0; i < len; i++) {
                if (sum + nums[i] <= mid)
                    sum += nums[i];
                else {
                    cnt += 1;
                    sum = nums[i];
                }
            }

            if (cnt <= k)
                h = mid - 1;
            else
                l = mid + 1;
        }

        return l;
    }
};