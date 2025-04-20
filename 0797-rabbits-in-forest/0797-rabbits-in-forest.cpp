class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        int total=0;
        int n = answers.size();
        for(int i=0;i<n;i++){
            mp[answers[i]]++;
        }
        for(auto i:mp){
            int v = i.first;
            int k = i.second;
            int group=(v+k)/(v+1);
            total+=group*(v+1);
        }
        return total;
    }
};