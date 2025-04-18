class Solution {
private:
    vector<pair<char, int>> frequency(const string& s) {
        vector<pair<char, int>> nums;
        int count = 1;
        char temp = s[0];

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == temp) {
                count++;
            } else {
                nums.push_back({temp, count});
                temp = s[i];
                count = 1; 
            }
        }
        nums.push_back({temp, count}); 
        return nums;
    }

    string pairs(const vector<pair<char, int>>& nums) {
        string s = "";
        for (const auto& p : nums) {
            s += to_string(p.second) + p.first; 
        }
        return s;
    }

public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        string ans = "1"; // Start with the first term

        for (int i = 2; i <= n; i++) {
            auto num = frequency(ans);
            ans = pairs(num);
        }
        return ans;
    }
};