class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0,right=0,k=1;
        while(right<nums.size()){
            if(nums[left]!=nums[right]){
                left++;
                swap(nums[left],nums[right]);
                k++;
            }
            right++;
        }
        return k;
    }
};