class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long long sum=0;
        if(x<0 && x>INT_MAX){
            return false;
        }
        while(temp>0){
            int r=temp%10;
            sum=sum*10+r;
            temp/=10;
        }
        if(x==sum){
            return true;
        }
        return false;
        
    }
};