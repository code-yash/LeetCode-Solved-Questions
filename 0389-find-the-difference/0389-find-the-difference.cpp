class Solution {
public:
    char findTheDifference(string s, string t) {

        int xr = 0;

        if(!s.length())
            return t[0];

        for(auto c: s){
            xr ^= c;
        }

        for(auto c: t){
            xr ^= c;
        }

        return xr;
        
    }
};