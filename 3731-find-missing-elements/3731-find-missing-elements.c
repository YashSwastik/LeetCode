/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    int k=0;
    int min = nums[0];
    int max =0;
    for (int i=0; i<numsSize; i++){
        if(nums[i]< min){
            min = nums[i];
        }
        if(nums[i]>max){
            max = nums[i];
        }
    }
    int *missing = (int *)malloc((max - min) * sizeof(int));
    for(int i=min;i<max;i++){
        int flag=0;
        for(int j =0; j<numsSize;j++){
                if(i == nums[j]){
                    flag = 1;
                    break;
                }
            }
            if(flag==0){
                missing[k++]=i;
        }
    }
    *returnSize = k;
    return missing;
}