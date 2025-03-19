class Solution {
public:
    int minOperations(vector<int>& nums) {
        int bin=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==bin){
                count++;
                bin^=1;
            }
        }
        return count;
    }
};