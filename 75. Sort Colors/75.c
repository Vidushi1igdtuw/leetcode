void sortColors(int* nums, int numsSize) {
    int low=0;
    int mid= 0;
    int high= numsSize-1;
    while(mid<=high){
        if(mid[nums]==0){
            int temp= nums[low];
            nums[low]=nums[mid];
            nums[mid]=temp;
            mid++;
            low++;
        }
        else if(mid[nums]==1){
            mid++;
        }
        else{
            int temp= nums[high];
            nums[high]=nums[mid];
            nums[mid]=temp;
            high--;
        }
    }
}