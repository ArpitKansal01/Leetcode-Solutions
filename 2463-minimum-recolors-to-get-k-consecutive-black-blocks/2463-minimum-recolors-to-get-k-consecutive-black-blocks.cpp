class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int min_count=INT_MAX;
        for(int i=0;i<n-k+1;i++){
            int curr_count=0;
            for(int j=0;j<k;j++){
                if(blocks[i+j]=='W'){
                    curr_count++;
                }
            }
            min_count=min(min_count,curr_count);
        }
        return min_count;
    }
};