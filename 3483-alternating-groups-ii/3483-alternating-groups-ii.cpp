class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
       int n = colors.size();
       int left=0;
       int end=n+k-1;
       int count=0;
       while(left<end){
        int right=left+1;
        while(right<end && colors[(right-1)%n]!=colors[right%n]){
            right++;
        }
        if(right-left>=k){
            count+=(right-left)-k+1;
        }
        left=right;
       }        
       return count;
    }
};