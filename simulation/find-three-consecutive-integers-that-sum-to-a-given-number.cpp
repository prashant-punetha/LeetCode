class Solution {
public:
    vector<long long> sumOfThree(long long n) {

       
            if (n % 3 != 0) {
                return {};
            }
            long long mid=n/3;
        
        return {mid-1,mid,mid+1};
    }
};