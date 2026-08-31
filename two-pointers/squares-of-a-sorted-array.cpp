#include <algorithm>
#include<vector>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        std::vector<int>arr(n);
        
        int i;
        for (int i = 0; i < nums.size(); i++) {
            arr[i] = nums[i] * nums[i];
        }
        std::sort(arr.begin(), arr.end());
        return arr;
       
    }
};