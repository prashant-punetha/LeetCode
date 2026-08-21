class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cc=0,maxct=0;
        for(int num:nums)
        {
            if(num==1)
                cc++;
            else
            {
                cc=0;
            
                }
        maxct=max(maxct,cc);
        }  
        return maxct;
}
};