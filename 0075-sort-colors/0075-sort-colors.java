class Solution {
    public void sortColors(int[] nums) {
        int low=0,mid=0,high=nums.length-1,temp;
        while(mid<=high){
            if(nums[mid]==0){
                temp=nums[low];
                nums[low]=nums[mid];
                nums[mid]=temp;
                low++;
                mid++;
            }
            else if(nums[mid]==2){
                temp=nums[high];
                nums[high]=nums[mid];
                nums[mid]=temp;
                high--;
            }
            else{
                mid++;
            }
        }
    }
}