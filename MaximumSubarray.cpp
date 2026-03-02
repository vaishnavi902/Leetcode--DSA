//Maximum Subarray
/*Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = nums[0];
        int maxSum = nums[0];
        for(int i=1;i<nums.size();i++){
            current = max(nums[i], current + nums[i]);
            maxSum = max(maxSum , current);
        }   
        return maxSum ;
    }
};
