class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0,right=numbers.size()-1;
        while(left<=right){
            if(numbers[left]+numbers[right]==target)
                break;
            if(numbers[left]+numbers[right]>target)
                right-=1;
            else
                left+=1;
        }
        vector<int> vec={-1,-1};
        vec[0]=left+1;
        vec[1]=right+1;
        return vec;
    }
};