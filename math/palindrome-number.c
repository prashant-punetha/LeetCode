bool isPalindrome(int x) {
    int r,d=0,temp;
    temp=x;
    while(x>0)
    {r=x%10;
    if(d>(2147483647-r)/10)
        return false;
    d=d*10+r;
    x/=10;
    }
    if(d==temp)
        return true;
    return false;
}