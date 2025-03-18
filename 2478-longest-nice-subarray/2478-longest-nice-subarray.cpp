class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        long long currsum=0,xorsum=0,left=0,right=0,count=0;
        while(right<nums.size()){
            currsum+=nums[right];
            xorsum^=nums[right];
            if(currsum==xorsum)
                count=max(count,right-left+1);
            else{
                currsum-=nums[left];
                xorsum^=nums[left];
                left++;
            }
            right++;
        }
        return count;
    }
};