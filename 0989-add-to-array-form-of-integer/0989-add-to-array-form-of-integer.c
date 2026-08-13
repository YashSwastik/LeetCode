int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    int *arr = malloc((numSize + 10) * sizeof(int));
    int i = numSize - 1;
    int pos = 0;

    while(i >= 0 || k > 0) {
        int sum = k % 10;

        if(i >= 0)
            sum += num[i--];

        arr[pos++] = sum % 10;
        k = k / 10 + sum / 10;
    }

    while(i >= 0)
        arr[pos++] = num[i--];

    for(int l = 0, r = pos - 1; l < r; l++, r--) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
    }

    *returnSize = pos;
    return arr;
}