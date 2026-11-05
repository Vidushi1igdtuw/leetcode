int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d) {
    int count=0;
    int realCount=0;
    for(int i=0; i<arr1Size; i++){
        for(int j=0; j<arr2Size; j++){
            if(abs(arr1[i]-arr2[j])<=d){
                count++;
                break;
            }
        }
    }
    realCount=arr1Size-count;
    return realCount;
}