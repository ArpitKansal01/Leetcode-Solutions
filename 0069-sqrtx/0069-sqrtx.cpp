class Solution {
public:
    int mySqrt(int x) {
        if(x==0)    return 0; 
        for(int i=1;i<=x/2+1;i++){
            if(i>INT_MAX/i)    return i-1;
            else if(i*i==x) return i;
            else if(i*i>x) return i-1;
        }
        return 0;
    }
};