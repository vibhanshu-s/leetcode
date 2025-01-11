void swap(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
  for(int i=m,k=0;i<m+n;i++,k++)
    nums1[i]=nums2[k];
    for(int i=0;i<nums1Size;i++){
       int min=i;
       for(int j=i+1;j<nums1Size;j++) if(nums1[j]<nums1[min]) min=j;
         swap(&nums1[i],&nums1[min]);
    }
}