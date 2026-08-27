class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left = 0;
        long long right = sqrt(c);
        while (left <= right) {
            long long cur = (left * left) + (right * right);
            if (cur == c) {
                return true;
            } else if (cur < c) {
                left++;
            } else  {
                right--;
            }
        }
        return false;
    }
};