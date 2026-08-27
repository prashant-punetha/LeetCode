class Solution {
public:
    vector<long long> sumOfThree(long long n) {
       
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    for (int k = 0; k < n; k++) {
                        if (i + j + k == n &&(j==i+1&&k==j+1)) {
                            return {i, j, k};
                        }
                    }
                }
            }
        
        return {};
    }
};