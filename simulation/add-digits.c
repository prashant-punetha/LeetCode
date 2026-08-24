int addDigits(int n) {
    int r; 
    int sum=0;
    while (n>=10){
        sum=0;
        while(n>0){
            r=n%10;
            sum+=r;
            n/=10;
            }
    n=sum;
    }   
  
     return n;
        
}