/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int *solution= (int *)malloc(sizeof(int)*numsSize);
    int start=0;
    int end= numsSize-1;
    for(int i=0; i<numsSize;i++){
        if(nums[i]%2==0){
            solution[start++]=nums[i];
        }else{
            solution[end--]=nums[i];
        }
    }
    *returnSize = numsSize;
    return solution;
}