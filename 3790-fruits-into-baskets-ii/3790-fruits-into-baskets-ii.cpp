class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        vector<bool>check(baskets.size(),true);
        for(int i=0;i<fruits.size();i++){
            for(int j=0;j<baskets.size();j++){
                if(check[j] && fruits[i]<=baskets[j]){
                    check[j]=false;
                    break;
                }
            }
        }
        int count=0;
        for(int i=0;i<check.size();i++){
            if(check[i]==true){
                count++;
            }
        }
        return count;
    }
};