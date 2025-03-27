class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int>First;
        unordered_map<int,int>Second;
        for(int i=0;i<nums.size();i++){
            Second[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            Second[nums[i]]--;
            First[nums[i]]++;
            if(First[nums[i]]*2>i+1 && Second[nums[i]]*2>(nums.size()-i-1)){
                return i;
            }
        }
        return -1;
    }
};