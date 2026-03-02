//Contains Duplicate
/*Input: nums = [1,2,3,1]
Output: true
Explanation:
The element 1 occurs at the indices 0 and 3.*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(s.find(nums[i]) != s.end()){
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};
