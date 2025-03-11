class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(s[i]>='A' && s[i]<='Z')  ch=tolower(s[i]);
            if(ch>='a' && ch<='z' || ch>='0' && ch<='9') str+=ch; 
        }
        int left=0,right=str.size()-1;
        while(left<right){
            if(str[left]!=str[right])   return false;
            left++;right--;
        }
        return true;
    }
};