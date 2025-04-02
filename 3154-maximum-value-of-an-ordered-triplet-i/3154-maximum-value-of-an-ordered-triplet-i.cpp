class Solution {
#define ll long long
public:
    long long maximumTripletValue(vector<int>& nums) {
        ll maxSum=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ll diff=nums[i]-nums[j];
                for(int k=j+1;k<n;k++){
                    ll val=diff*nums[k];
                    if(val>maxSum){
                        maxSum=val;
                    }
                }
            }
        }
        if (maxSum<0){
            return 0;
        }
        return maxSum;
    }
};