int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int *arr = malloc(numsSize * sizeof(int));
    int p = 0, n = 1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            arr[p] = nums[i];
            p += 2;
        } else {
            arr[n] = nums[i];
            n += 2;
        }
    }

    *returnSize = numsSize;
    return arr;
}