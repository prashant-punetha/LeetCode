class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left=0;
        long long right=sqrt(c);
        while(left<right)
        {
            long long cur=left*left+right*right;
            if(cur==c)
            {
                return true;
            }
            if(cur<c)
            {
                left++;
            }
            else if(cur>c)
            {
                right--;
            }
        }
        return false;
        }
};