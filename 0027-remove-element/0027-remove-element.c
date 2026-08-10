int removeElement(int* nums, int numsSize, int val) {
    int *temp = malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        temp[i] = nums[i];
    }
    int k=0;
    for (int i = 0; i < numsSize; i++){
            if(temp[i]!= val){
                nums[k++]= temp[i];
            }
    }
    return k;
}