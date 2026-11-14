/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
   int *solution = (int*)malloc(sizeof(int) * numsSize);
   
   int odd=1;
   int even=0;
   for (int i=0; i<numsSize; i++){
    if(nums[i]%2==0){
        solution[even]=nums[i];
        even+=2;
    }else{
        solution[odd]=nums[i];
        odd+=2;
    }
   }
   *returnSize =  numsSize;
   return solution;
}