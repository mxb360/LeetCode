

int numJewelsInStones(char * J, char * S){
    char j[128] = {0};
    int total = 0;
    
    for (int i = 0; J[i]; i++)
        j[J[i]] = 1;
    for (int i = 0; S[i]; i++)
        total += j[S[i]];
    
    return total;
}
