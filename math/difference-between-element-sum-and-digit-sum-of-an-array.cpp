class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int esum = 0;
        int dsum = 0;

        for (int i = 0; i < n; i++) {
            esum += nums[i];

            while (nums[i]) {
                dsum += nums[i] % 10;
                nums[i] /= 10;
            }
        }

        return abs(esum - dsum);
    }
};