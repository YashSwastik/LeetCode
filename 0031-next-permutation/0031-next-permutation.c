void nextPermutation(int* nums, int numsSize) {
    int i = numsSize - 2;

    // 1. Find the pivot
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    // 2. Find the element just greater than pivot
    if (i >= 0) {
        int j = numsSize - 1;

        while (nums[j] <= nums[i]) {
            j--;
        }

        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    // 3. Reverse the part after pivot
    int left = i + 1;
    int right = numsSize - 1;

    while (left < right) {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;

        left++;
        right--;
    }
}