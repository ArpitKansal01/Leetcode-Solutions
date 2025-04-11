class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        vector<int> ans;
        for(int i=low;i<=high;i++){
            string s = to_string(i);
            int sum1=0,sum2=0;
            for(int j = 0;j<s.size()/2;j++){
                int num = int(s[j]);
                sum1+=num;
            }
            for(int j =s.size()/2;j<s.size();j++){
                int num = int(s[j]);
                sum2+=num;
            }
            if(sum1==sum2)  ans.push_back(sum1);  
        }
        return ans.size();
    }
};