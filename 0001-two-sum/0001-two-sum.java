class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> mp = new HashMap<>();
        int[] arr = new int[2];
        for(int i=0;i<nums.length;i++){
            int key = target - nums[i];
            if(mp.containsKey(key)){
                arr[0]=i;
                arr[1]=mp.get(key);
                break;
            }
            else{
                mp.put(nums[i],i);
            }
        }
        return arr;
    }
}