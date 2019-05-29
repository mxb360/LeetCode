
int numJewelsInStones(char* J, char* S) {
    int cnt = 0;
    char *s = S;
    
    while (*J) {
        s = S;
        while (*s) 
            if (*s++ == *J)
                cnt++;
        J++;
    }
    
    return cnt;
}
