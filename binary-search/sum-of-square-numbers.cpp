class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long long i = 0; i <= c; i++) {
            for (long long j = 0; j <= c; j++) {
                if (i * i + j * j == c)
                    return true;
            }
        }
        return false;
    }
};