int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int flag=0;
    int maxCons=0;
    for (int i=0; i< numsSize; i++){
        if(nums[i]==1){
            flag +=1;
            if( maxCons<flag){
                maxCons=flag; 
            }
        }
        else
            flag =0;    
    }
    return maxCons;
}