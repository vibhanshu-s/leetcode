// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int l=1,mid,out;
    while(l<=n){
        mid=l+(n-l)/2;
        if(isBadVersion(mid)){
                out = mid;
                n=mid-1;
        }
        else l=mid+1;
    }
    return out;
}