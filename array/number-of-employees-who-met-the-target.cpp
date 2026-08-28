class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0;
        int c;
        for(int i=0;i<hours.size();i++)
        {
           if(hours[i]>=target)
           count++;
            c=count;
        }
        return c;
    }
};