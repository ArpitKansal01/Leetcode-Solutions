class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left=INT_MIN,right=0,ans;
        for(int i=0;i<weights.size();i++){
            left=max(left,weights[i]);
            right+=weights[i];
        }
        while(left<=right){
            int mid = left+(right-left)/2;
            int count=1,weight=0;
            for(int i=0;i<weights.size();i++){
                weight+=weights[i];
                if(weight>mid){
                    count++;
                    weight=weights[i];
                }
            }
            if(count<=days){
                ans = mid;
                right = mid-1;
            }
            else left = mid+1;
        }
        return ans;
    }
};