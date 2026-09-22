/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int n, int* returnSize) {
        int* ans;
        ans=malloc(n*sizeof(int));
        int leftsum=0;
        for(int i=0;i<n;i++){
            ans[i]=leftsum;
            leftsum+=nums[i];
        } 
        int rightsum=0;
        for(int i=n-1;i>=0;i--){
            ans[i]=abs(ans[i]-rightsum);
            rightsum+=nums[i];
        }
        *returnSize=n;
        return ans;
}