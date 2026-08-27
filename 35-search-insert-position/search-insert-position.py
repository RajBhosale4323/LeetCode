class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        low = 0
        high = len(nums)-1
        while low<=high:
            m = (low+high)//2
            print(m)
            if nums[m]>=target:
                high = m-1
            else:
                low = m+1
        return low
        