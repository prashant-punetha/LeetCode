class Solution {
public:
    int maxArea(vector<int>& height) {
        int i, k;
        int n = height.size();
        int max = 0;
        for (int i = 0; i < n; i++) {
            for (int k = n - 1; k > 0; k--) {
                int l = min(height[i], height[k]);
                int b = k - i;
                int area = l * b;
                if (area > max) {
                    max = area;
                }
            }
        }
        return max;
    }
};