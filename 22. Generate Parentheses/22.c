/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void countValid(int open, int close, int n, int* count){
    if(open==n && close==n){
        (*count)++;
        return;
    }
    if(open<n)countValid(open+1,close,n,count);
    if(close<open)countValid(open, close+1, n, count);
}
void backtracking(int open, int close, int n, char* current, int* index, char** result){
    if(open==n && close==n){
        result[(*index)++]=strdup(current);
        return;
    }
    int len=strlen(current);
    if(open<n){
        current[len]= '(';
        current[len+1]='\0';
        backtracking(open+1, close, n, current, index, result);
        current[len]='\0';
    }
    if(close<open){
        current[len]=')';
        current[len+1]='\0';
        backtracking(open, close+1, n, current, index, result);
        current[len]='\0';
    }
}
char** generateParenthesis(int n, int* returnSize) {
    *returnSize=0;
    countValid(0,0,n,returnSize);
    char **result=(char **)malloc((*returnSize)*sizeof(char *));
    int index=0;
    char *current=(char *)malloc((n*2+1)*sizeof(char));
    current[0]='\0';
    backtracking (0,0,n,current,&index,result);
    free(current);
    return result;
}