char* intToRoman(int num) {
    static const char* symbol[] = {
        "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
    };
    static const int value[] = {
        1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
    };

    static char ans[20];
    ans[0]='\0';
    for(int i=0; i<13; ++i){
        while(num>=value[i]){
            num-=value[i];
            strcat(ans,symbol[i]);
        }     
    }
    return ans;
}