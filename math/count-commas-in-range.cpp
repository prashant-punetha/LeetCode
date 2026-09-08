class Solution {
public:
    int countCommas(int n) {
        if(n<999){
            return 0;
        }
        return max(1-999,n-999);
        
    }
};