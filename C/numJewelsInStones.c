

int numJewelsInStones(char * J, char * S){
    char j[256] = {0};
    int total = 0;
    
    for (int i = 0; J[i]; i++)
        j[J[i]] = 1;
    for (int i = 0; S[i]; i++)
        if (j[S[i]])
            total++;
    
    return total;
}
