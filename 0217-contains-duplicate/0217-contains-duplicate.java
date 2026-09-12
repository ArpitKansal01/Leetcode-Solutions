class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer,Integer> freq = new HashMap<Integer,Integer>();
        for(int i:nums){
            freq.put(i,freq.getOrDefault(i,0)+1);
        }
        for(int key:freq.keySet()){
            if(freq.get(key)>1){
                return true;
            }
        }
        return false;
    }
}