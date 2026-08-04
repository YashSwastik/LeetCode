bool check(int* nums, int numsSize) {
    int k=0;
    for(int i=1; i< numsSize;i++){
        if(nums[i-1]>nums[i])
            k= k+1;
        
    }
    if(nums[numsSize - 1] > nums[0])
            k++;
    if(k>1){
        return false;
    }
    else
        return true;
    
}