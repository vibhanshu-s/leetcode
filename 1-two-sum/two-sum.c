/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* res = (int*)malloc(2 * sizeof(int));
    int  i,j;
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                    res[0]=i;
                    res[1]=j;
                    *returnSize = 2;
                    return res;
            } 
        }
    }
    *returnSize = 0;
    return NULL;
    
}