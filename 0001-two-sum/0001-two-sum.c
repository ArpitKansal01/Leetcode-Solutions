int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    for (int i = 0; i < numsSize; i++) 
    {
        for (int j = i + 1; j < numsSize; j++) 
        {
            int *arr;
            if(nums[i]+nums[j]==target)
            {
                arr=(int *)malloc(2 * sizeof(int));
                arr[0]=i;
                arr[1]=j;
               // printf("[%d,%d]",i,j);
                *returnSize=2;
                return arr;
            }
        }
    }
    *returnSize=0;
    return NULL;
}