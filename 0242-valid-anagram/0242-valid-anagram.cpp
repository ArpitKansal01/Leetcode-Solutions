class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())  return false;
        unordered_map<char,int>str;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            str[ch]++;
        }
        for(int i=0;i<s.size();i++){
            char ch=t[i];
            if(--str[ch]==0)    str.erase(ch);
        }
        if(str.size()>0)    return false;
        else return true;
    }
};