class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>m1;
        for(int i=0;i<s.size();i++){
            m1[s[i]]=i;
        }
        vector<int>last;
        for(int i=0;i<s.size();i++){
            last.push_back(m1[s[i]]);
        }
        vector<int>ans;
        for(int i=0;i<last.size();){
            int fin=last[i];
            int count=0;
            for(int j=i;j<=fin;j++){
                fin=max(fin,last[j]);
                count++;
            }   
            i=fin+1;
            ans.push_back(count);
        }
        return ans;
    }
};