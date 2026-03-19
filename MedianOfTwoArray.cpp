//Input: nums1 = [1,3], nums2 = [2]
//Output: 2.00000
//Explanation: merged array = [1,2,3] and median is 2.

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;

        // Step 1: merge arrays
        merge.insert(merge.end(), nums1.begin(), nums1.end());
        merge.insert(merge.end(), nums2.begin(), nums2.end());

        int n = merge.size();

        // Step 2: sort the array
        sort(merge.begin(), merge.end());

        // Step 3: find median
        if (n % 2 == 0) {
            return (merge[n/2] + merge[n/2 - 1]) / 2.0;
        } else {
            return merge[n/2];
        }
    }
};
