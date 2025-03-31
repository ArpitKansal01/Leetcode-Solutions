class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        vector<long long>pairWeights(n-1);
        for(int i=0;i<n-1;i++){
            pairWeights[i]=weights[i]+weights[i+1];
        }
        sort(pairWeights.begin(),pairWeights.end());
        long long answer=0;
        for(int i=0;i<k-1;i++){
            answer+=pairWeights[n-2-i]-pairWeights[i];
        }
        return answer;
    }
};