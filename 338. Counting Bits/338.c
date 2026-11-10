/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int* solution = (int *)malloc(sizeof(int)*(n+1));
    solution[0]=0;
    for(int i=1; i<=n; i++){
        solution[i] = solution [i>>1] + (i & 1);
    }
    *returnSize = n+1;
    return solution;
}