class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = arr.size();
        vector<vector<int>>nums;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                if(abs(arr[i]-arr[j])<=a){
                    for(int k=j+1;k<n;k++){
                        if(abs(arr[j]-arr[k])<=b){
                            if(abs(arr[i]-arr[k])<=c){
                                vector<int>num;
                                num.push_back(arr[i]);
                                num.push_back(arr[j]);
                                num.push_back(arr[k]);
                                nums.push_back(num);
                            }
                        }
                    }
                }
            }
        }
        return nums.size();
    }
};