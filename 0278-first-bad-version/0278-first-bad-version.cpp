// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(isBadVersion(1)==true)
            return 1;
        int left=1,right=n,mid=0;
        while(left<=right){
            mid=left+((right-left)/2);
            if (isBadVersion(mid)==true && isBadVersion(mid-1)==false)
                return mid;
            else if(isBadVersion(mid)==true && isBadVersion(mid-1)==true)
                right=mid-1;
            else
                left=mid+1;
        }
        return -1;
    }
};