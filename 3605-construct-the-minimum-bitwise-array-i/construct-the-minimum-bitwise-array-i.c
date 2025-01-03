/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minBitwiseArray(int* nums, int numsSize, int* returnSize) {
    int* res=(int*)malloc(numsSize*sizeof(int));
    
    for(int i=0;i<numsSize;i++){
        int k=0;
        res[i]=-1;
        while(k<nums[i]){
            if((k|(k+1))==nums[i]) {
                res[i]=k; 
                break;
            }
            k++;
        }
    }
    *returnSize=numsSize;
    return res;
}