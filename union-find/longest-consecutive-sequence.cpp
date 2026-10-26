class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int counter=1;
        int longest=1;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            else if(nums[i]+1==nums[i+1]){
                counter++;
            }
            else {
                counter=1;
            }
            longest=max(longest,counter);
        }

        return longest;
        
    }
};