class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size()*grid.size(),dup_num,mis_num;
        vector<int> arr={};
    for(int j=0;j<grid.size();j++){
            vector<int> row = grid[j];
            for (int k=0;k<row.size();k++){
                arr.push_back(grid[j][k]);
            }
    }
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int num:arr){
            if(num==i){
                flag++;
            }
        }
        if(flag==0){
            mis_num=i;
        }
        if(flag==2){
            dup_num=i;
        }
    }
        vector<int> ans={dup_num,mis_num};
        return ans;
    }
};