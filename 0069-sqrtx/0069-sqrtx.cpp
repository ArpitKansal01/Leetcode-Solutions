class Solution {
public:
    int mySqrt(int x) {
        if (x<2)
            return x;
        int left=1;
        int right=x/2;
        long signed int mid=0;
        while(left<=right){
            mid=left+((right-left)/2);
            if (mid*mid==x){
                return mid;
            }
            else if(mid*mid>x)
                 right=mid-1;
            else
                left=mid+1;
        }
        return right;
    }
};