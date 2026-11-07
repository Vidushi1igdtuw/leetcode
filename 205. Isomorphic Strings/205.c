bool isIsomorphic(char* s, char* t) {
    int s_length = strlen(s);
    int t_length = strlen(t);
    if(s_length != t_length) return false;

    int map_s[256];
    int map_t[256];

    for(int i=0; i<256; i++){
        map_s[i]=-1;
        map_t[i]=-1;
    }

    for(int i=0; i<s_length; i++){
        unsigned char c1 = s[i];
        unsigned char c2 = t[i];

        if(map_s[c1]!=-1 && map_s[c1]!=c2) return false;
        if(map_t[c2]!=-1 && map_t[c2]!=c1) return false;

        map_s[c1]=c2;
        map_t[c2]=c1;
    }
    return true;
}