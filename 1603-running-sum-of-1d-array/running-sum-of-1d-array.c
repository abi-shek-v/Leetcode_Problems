/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int n, int* returnSize) {
    int* prev;
    prev=malloc(n*sizeof(int));
    prev[0]=nums[0];
    for(int i=1;i<n;i++){
        prev[i]=prev[i-1]+nums[i];
    }
    *returnSize=n;
    return prev;
    free(prev);
}