class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int prev=nums[0];
        int curr=0;
        for(int i=1;i<nums.size()-1;i++){
            int maxSum=max(prev,curr+nums[i]);
            curr=prev;
            prev=maxSum;
        }
        int left=nums[1];
        curr=0;
        for(int i=2;i<nums.size();i++){
            int maxSum=max(left,curr+nums[i]);
            curr=left;
            left=maxSum;
        }
        return max(left,prev);
    }
};