class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int close_sum = nums[0] + nums[1] + nums[2];
        for (int l1 = 0; l1 < n - 2; l1++) {
            int l2 = l1 + 1;
            int r = n - 1;
            while (l2 < r) {
                int sum = nums[l1] + nums[l2] + nums[r];

                if (abs(target - sum) < abs(target - close_sum)) {
                    close_sum = sum;
                }

                if (sum < target) {
                    l2++;
                }
                else if (sum > target) {
                    r--;
                }
                else {
                    return sum;  // exact answer
                }
            }
        }
        return close_sum;
    }
};