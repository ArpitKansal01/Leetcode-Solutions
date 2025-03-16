class Solution {
public:
    int rob(vector<int>& nums) {
       if(nums.size()==1){
        return nums[0];
       }
       vector<int> sum(nums.size(),0);
       sum[0]=nums[0];
       int prev=sum[0];
       int curr=0;
       for(int i=1;i<nums.size();i++){
            int maxSum=max(prev,curr+nums[i]);
            curr=prev;
            prev=maxSum;
       }
       return prev;
    }
};