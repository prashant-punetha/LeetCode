int mySqrt(int x) {
    int sqr;
 
    if(x==0 || x==1)
      {  sqr=x;
        return sqr;}
  
    int low=1;
    int high=x;
    int mid=0;
    int ans=0;
        while(low<=high)
    {
        int mid=low+(high-low)/2;
        long long y=(long long) mid*mid;
       if(y==x)
        {
            return mid;
        }   
      
       else if(x>y)
        {
            ans=mid;
             low=mid+1;
        }
        else
        {high=mid-1;}


    }
    return ans;
    }
