bool isHappy(int n) {
    while (n !=1 &&n!=4) {
        int d=0;
        while (n > 0) {
            
           int r = n % 10;
            d = d + (r * r);
            n /= 10;
            
        }
        n=d;
    }
        return n==1;
    }