from typing import List

class Solution:
    # Function to find the majority element in an array
    def majorityElement(self, nums: List[int]) -> int:
        
        # Size of the given array
        n = len(nums)
        
        # Count
        cnt = 0
        
        # Element
        el = 0
        
        # Applying the algorithm
        for num in nums:
            if cnt == 0:
                cnt = 1
                el = num
            elif el == num:
                cnt += 1
            else:
                cnt -= 1
        
        """ Checking if the stored element
        is the majority element"""
        cnt1 = nums.count(el)
        
        # Return element if it is a majority element
        if cnt1 > (n // 2):
            return el
        
        # Return -1 if no such element found
        return -1

# Test the solution with the given example
arr = [2, 2, 1, 1, 1, 2, 2]

# Create an instance of Solution class
sol = Solution()

ans = sol.majorityElement(arr)

# Print the majority element found
print(f"The majority element is: {ans}")