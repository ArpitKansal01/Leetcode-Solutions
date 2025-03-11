class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, int> ccount;
        int left = 0, right = 0, count = 0;
        while (right < s.size()) {
            ccount[s[right]]++;
            while (ccount['a'] > 0 && ccount['b'] > 0 && ccount['c'] > 0) {
                count += (s.size() - right); 
                if (--ccount[s[left]] == 0) {
                    ccount.erase(s[left]);
                }
                left++;
            }
            right++;
        }
        return count;
    }
};