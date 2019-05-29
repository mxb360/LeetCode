class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int total = 0;
        map<char, bool> m;
        
        for_each(J.begin(), J.end(), [&](char &v){ m[v] = true;});
        for_each(S.begin(), S.end(), [&](char &v){ if (m.count(v)) total++;});
            
        return total;
    }
}
