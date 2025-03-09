int searchInsert(int* nums, int numsSize, int target) {
    int left=0,mid;
    numsSize-=1;
   while(left<=numsSize){
		mid=(left+numsSize)/2;
		if(nums[mid]==target){
			return mid;
			break;
		}
		else if(nums[mid]<target){
			left=mid+1;
		}
		else{
			numsSize=mid-1;
		}
	}
	return left;
}