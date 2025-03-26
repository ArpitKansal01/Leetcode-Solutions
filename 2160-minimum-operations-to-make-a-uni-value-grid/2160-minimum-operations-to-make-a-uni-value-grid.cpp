class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>nums;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                nums.push_back(grid[i][j]);
            }
        }
        nth_element(nums.begin(), nums.begin() + nums.size() / 2,
                    nums.end());
        int target=nums[nums.size()/2];
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%x!=target%x) return -1;
            res+=abs(target-nums[i])/x;
        }
        return res;
    }
};