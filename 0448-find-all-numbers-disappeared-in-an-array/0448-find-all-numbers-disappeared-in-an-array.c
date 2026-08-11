/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *arr = malloc(numsSize * sizeof(int));
    int k =0;
    for(int i=0;i<numsSize;i++){
        int x = abs(nums[i])-1;
        if(nums[x]>0){
            nums[x]= -nums[x];
        }
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]>0){
            arr[k++]=i+1;
        }
    }
    *returnSize = k;
    return arr;
}