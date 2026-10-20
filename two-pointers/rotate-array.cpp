class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp[nums.size()];
        k=k%nums.size();
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=temp[i];
        }


        
    }
};