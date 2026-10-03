class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l = nums.size();
        int high;
        int low = 0, mid;
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        while (low < l - 2) {
            mid = low + 1, high = l - 1;
            while (mid < high) {
                int n = nums[low] + nums[mid] + nums[high];
                if (n == 0) {
                    vector<int> temp = {nums[low], nums[mid], nums[high]};
                    ans.push_back(temp);
                    high--;
                    mid++;
                    while (mid < high && nums[high + 1] == nums[high])
                        high--;
                    while (mid < high && nums[mid - 1] == nums[mid])
                        mid++;
                } else if (n < 0)
                    mid++;
                else
                    high--;
            }
            low++;
            while (low < l - 2 && nums[low] == nums[low - 1])
                low++;
        }
        return ans;
    }
};