/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
 
let bs = (low, high, target, nums) => {
    if (low>high)
        return -1
    let m = Math.round((high+low)/2);
    if (nums[m] ==target) 
        return m;
    else if (nums[m]<target)
        return bs(m+1, high, target, nums);
    else if (nums[m]>target)
        return bs(low, m-1, target, nums)

}
var search = function(nums, target) {
    l = nums.length-1;
    return bs(0, l, target, nums);
};