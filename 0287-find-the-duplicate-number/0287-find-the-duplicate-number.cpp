class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>range(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            range[nums[i]]++;
        }
        for(int i=0;i<range.size();i++){
            if(range[i]>1){
                return i;
            }
        }
        return 0;
    }
};