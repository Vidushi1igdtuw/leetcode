char* removeTrailingZeros(char* num) {
    int numSize = strlen(num);
    while(numSize>0 && num[numSize-1]=='0'){
        num[numSize-1]='\0';
        numSize--;        
    }
    return num;
}