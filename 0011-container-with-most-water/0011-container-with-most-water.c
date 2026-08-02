int maxArea(int* height, int heightSize) {
    int left =0 , right = heightSize-1;
    int maxwater =0;
    while (left<right){
        if(height[left]<height[right]){
            int area = height[left] * (right-left);
            if(area>maxwater)
                maxwater = area;
            left++;
        }
        else{
            int area = height[right] * (right-left);
                if(area>maxwater)
                    maxwater = area;
            right--;
        }        
    }
    return maxwater;
}