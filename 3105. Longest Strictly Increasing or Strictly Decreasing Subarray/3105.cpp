class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int length = nums.size();
        int max=1;
        int inc=1;
        int dec=1;

        for(int i=1; i<length; i++){
            if(nums[i] > nums[i-1]){
                inc++;
                dec = 1;
            }else if(nums[i] < nums[i-1]){
                dec++;
                inc = 1;
            }else{
                inc = 1;
                dec = 1;
            }

            if(dec > max)max = dec;
            if(inc > max)max = inc;
        }
        return max;
    }
};