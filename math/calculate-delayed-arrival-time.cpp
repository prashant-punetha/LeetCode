class Solution {
public:
    int findDelayedArrivalTime(int aTime, int dTime) {
        if(aTime+dTime>=24)
        {
            return 0;

        }
        else
        {
            return aTime+dTime;
        }
        
    }
};