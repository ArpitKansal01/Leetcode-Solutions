class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int temp = x;
        int rev = 0;
        while(temp!=0){
            int rem = temp%10;
            if(rev>INT_MAX/10)  return false;
            rev = rev*10+rem;
            temp/=10;
        }
        if(rev==x)  return true;
        else return false;
    }
};