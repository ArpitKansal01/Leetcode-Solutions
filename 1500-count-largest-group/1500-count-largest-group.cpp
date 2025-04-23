class Solution {
public:
    int countLargestGroup(int n) {
       unordered_map<int,int>mp;
       for(int i=1;i<=n;i++){
        int temp =i;
        int sum=0;
        while(temp>0){
            int rem = temp%10;
            sum+=rem;
            temp/=10;
        }
        mp[sum]++;
       } 
       int count=0;
       int big=0;
       for(auto i:mp){
        if(i.second>big){
            big=i.second;
            count=0;
        }
        if(big==i.second)   count++;
       }
       return count;
    }
};