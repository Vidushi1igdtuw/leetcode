/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(void const*a, void const* b){
    return(*(int *)b - *(int *)a);
}
char** findRelativeRanks(int* score, int scoreSize, int* returnSize) {
    int *sorted =  (int *)malloc (sizeof(int)*scoreSize);
    char **solution = (char **)malloc(sizeof(char *)*scoreSize);

    for(int i=0; i<scoreSize; i++){
        sorted[i]=score[i];
    }

    qsort(sorted, scoreSize, sizeof(int), cmp);

    for(int i=0; i<scoreSize; i++){
        solution[i]=(char *)malloc(sizeof(char *)*15);
        if(score[i]==sorted[0]){
            strcpy(solution[i],"Gold Medal");
        }else if(score[i]==sorted[1]){
            strcpy(solution[i],"Silver Medal");
        }else if(score[i]==sorted[2]){
            strcpy(solution[i],"Bronze Medal");
        }else{
            for(int j=3;j<scoreSize;j++){
                if(score[i]==sorted[j]){
                    sprintf(solution[i],"%d",j+1);
                    break;
                }
            }
        }
    }
    free(sorted);
    *returnSize = scoreSize;
    return solution;
}