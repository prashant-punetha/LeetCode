int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int cc=0,maxct=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==1)
            cc++;
        else
        {
            cc=0;
        
            }
       maxct=fmax(maxct,cc);
    }  
    return maxct;
}
