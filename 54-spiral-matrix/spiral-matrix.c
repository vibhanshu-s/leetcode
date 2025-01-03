/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int m=matrixSize;
    int n=*matrixColSize;
    int* out = (int*)malloc(m*n*sizeof(int));
     int t = 0, b = m - 1, l = 0, r = n - 1, k = 0;
    while (t <= b && l <= r) {
        for (int i = l; i <= r; i++) out[k++] = matrix[t][i];
        t++;
        for (int i = t; i <= b; i++) out[k++] = matrix[i][r];
        r--;
        if (t <= b) for (int i = r; i >= l; i--) out[k++] = matrix[b][i];
        b--;
        if (l <= r) for (int i = b; i >= t; i--) out[k++] = matrix[i][l];
        l++;
    }
    *returnSize = m * n;
    return out;

}