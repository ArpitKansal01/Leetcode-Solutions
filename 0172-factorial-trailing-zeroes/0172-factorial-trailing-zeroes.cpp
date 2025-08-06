class Solution {
public:
    int trailingZeroes(int n) {
        int z=0;
        while(n>4){
            z+=n/5;
            n/=5;
        }
        return z;
    }
};