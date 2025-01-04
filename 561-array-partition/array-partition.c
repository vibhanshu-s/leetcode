int arrayPairSum(int* nums, int numsSize) {
    int sum=0;
     for (int i = 1; i < numsSize; i++) {
        int j = i - 1;
        while (j >= 0 && nums[j] > nums[j+1]) {
            int temp = nums[j+1];
            nums[j + 1] = nums[j];
            nums[j]=temp;
            j--;
         }
     }
     for(int i=0;i<numsSize;i+=2){
        sum+=nums[i];
     }
     return sum;
}