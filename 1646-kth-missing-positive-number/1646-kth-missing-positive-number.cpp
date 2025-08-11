class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left=0,right=arr.size()-1,pos=arr.size();
        while(left<=right){
            int mid = left+(right-left)/2;
            if(arr[mid]-mid-1>=k){
                pos=mid;
                right=mid-1;
            }
            else left=mid+1;
        }
        return pos+k;
    }
};