class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> nums;
        for(int i=0;i<arr.size();i++){
            nums.push_back(arr[i]-i-1);
        }
        int left=0,right=nums.size()-1,pos=nums.size();
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==k){
                pos=mid;
                right=mid-1;
            }
            else if(nums[mid]>k){
                pos=mid;
                right=mid-1;
            }
            else left=mid+1;
        }
        if(pos==nums.size())    return pos+k;
        return arr[pos]-(nums[pos]-k+1);
    }
};