class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int left=0;left<nums.size();left++){
            if(nums[left]==0){
                for(int right=left;right<nums.size();right++){
                    if(nums[right]!=0){
                        swap(nums[left],nums[right]);
                        break;
                    }
                }
            }
        }
    }
};