class Solution {
public:
    long long coloredCells(int n) {
        if(n==1){
            return 1;
        }
        long long currsum=1;
        for (long long i=2;i<=n;i++){
            currsum=currsum+(4*(i-1));
        }
        return currsum;
    }
};