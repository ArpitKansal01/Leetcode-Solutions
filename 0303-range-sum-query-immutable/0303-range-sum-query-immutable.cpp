class NumArray {
public:
    NumArray(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            range.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return range[right];
        }
        return range[right]-range[left-1];
    }
private:
    vector<int>range;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */