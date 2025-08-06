class Solution {
    public boolean isPalindrome(int x) {
        if(x<0) return false;
        int temp = x;
        int rev = 0;
        while(temp!=0){
            int rem = temp%10;
            if(rev>Integer.MAX_VALUE/10)  return false;
            rev = rev*10+rem;
            temp/=10;
        }
        if(rev==x)  return true;
        else return false;
    }
}