class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int index = 0;
        int max = nums[0];
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                max=nums[i];
                index = i;
            }
        }
        return index;
    }
};