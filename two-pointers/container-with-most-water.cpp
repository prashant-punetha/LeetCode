class Solution {
public:
    int maxArea(vector<int>& height) {
    
        int n = height.size();
        int maxa = 0;
        int left=0;
        int right=n-1;
        while(left<right){
                int l = min(height[left], height[right]);
                int b = right - left;
                int area = l* b;
                if (area > maxa) {
                    maxa = max(area,maxa);
                }
            
            if(height[left]<height[right])
            {
                left++;
            }
            else{
                right--;
            }
        }
        return maxa;
    }
};