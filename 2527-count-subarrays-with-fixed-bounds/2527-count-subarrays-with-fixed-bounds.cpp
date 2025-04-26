class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int pmin = -1;
        int pmax = -1;
        int bad = -1;
        long long ans = 0;
        for (int i =0;i<nums.size();i++){
            if(nums[i] == minK) pmin = i;
            if(nums[i] == maxK) pmax = i;
            if(nums[i] < minK || nums[i] > maxK)    bad = i;
            if( pmin != -1 && pmax != -1)   ans+=max(0,min(pmin,pmax)-bad);
        }
        return ans;
    }
};