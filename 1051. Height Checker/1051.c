// comparision function
int cmp(const void* a, const void* b){
    return(*(int *)a - *(int *)b);
}

int heightChecker(int* heights, int heightsSize) {
    int *sorted = (int *)malloc(sizeof(int) * heightsSize);

    // copying elements of array heights to array "sorted" created.
    for(int i=0; i<heightsSize; i++){
        sorted[i] = heights[i];
    }

    //performing quick sort on array "sorted"
    qsort(sorted, heightsSize, sizeof(int), cmp);
    
    int count = 0;
    for(int i=0; i<heightsSize; i++){
        if(heights[i] != sorted[i]){
            count++;
        }
    }

    return count;
}