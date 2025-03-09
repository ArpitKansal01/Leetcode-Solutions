class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans={-1,-1};
        vector<bool> prime(right+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i*i<=right;i++){
            if(prime[i]){
                for(int j=i*i;j<=right;j+=i){
                    prime[j]=false;
                }
            }
        }
        vector<int>num;
        for(int i=left;i<=right;i++){
            if(prime[i]){
                num.push_back(i);
            }
        }
        if(num.size()<2){
            return ans;
        }
        int small=num[1]-num[0];
        ans[0]=num[0];
        ans[1]=num[1];
        for(int i=0;i<num.size()-1;i++){
            if(num[i+1]-num[i]<small){
                small=num[i+1]-num[i];
                ans[0]=num[i];
                ans[1]=num[i+1];
            }
        }
        return ans;
    }
};